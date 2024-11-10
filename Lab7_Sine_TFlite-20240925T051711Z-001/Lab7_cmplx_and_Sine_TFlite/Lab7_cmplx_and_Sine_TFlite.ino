#include <time.h>
#include <EloquentTinyML.h>

// Define PLOT when you want to get the output to be plotted using Serial Plotter
#define PLOT

// This file has the TFlite model generated by the moreImprovedModelExtract_HexGen_tflite.ipynb 
#include "sine_2L_model_tflite.h"

// This file has the TFlite model generated by the moreImprovedModelExtract_HexGen_tflite.ipynb 
#include "cmplx_sine_2L_model_tflite.h"

// Both models are regression types with single input and output. If you need to combined two different models
// that need different set of inputs/outputs, these constants need to be defined separately for each model
#define NUMBER_OF_INPUTS 1
#define NUMBER_OF_OUTPUTS 1 

Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUT_FEATURES, SINE_TENSOR_ARENA_SIZE> mSine;
Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUT_FEATURES, CF_TENSOR_ARENA_SIZE> mCF;

// You can keep reducing the stack size to see where it fails but never set it to just above lower limit you find
// You can keep twice the size of minimum you find in case if you can fit in
#define PLOT_TASK_STACK_SIZE       4000  
#define INFERENCE_TASK_STACK_SIZE  4000  

extern float sine_predict(float x);
extern float cf_predict(float x);
void plot(float y_actual, float y_pred);

#define BUILT_IN_LED 2    // For ESP32

// The enum types need to be defined as all capital letters as per C coding guidelines
enum TaskType{SINE_TASK, CF_TASK};

void InferenceTask(void * parameter);
void InferenceEngine(void);
TaskHandle_t InferenceTaskHandle;
int InferenceTaskParam = 0x5678;

TaskHandle_t plotTaskHandle;
int plotTaskParam = 0xABCD;

#define NUM_Q_ITEMS 40    // To cater for both tasks to feed its data to the plot task
QueueHandle_t xQHandle;
typedef struct{
  TaskType task_type;
  float y_actual;
  float y_pred;
} Y_VALUES;

// For Sine wave generation
int sine_inference_count = 0;     // Perform Inference using the model with values of x ranging from 0 to 2pi Radians
const int kSineInferencesPerCycle = 40;  // Number of samples in one cycle 
const float kSineXrange = 2*3.14159265359f;   // Full sine wave not 2pi

// For Complex Fn wave generation
int complex_fn_inference_count = 0;     // Perform Inference using the model with values of x ranging from 0 to 2pi Radians
const int kComplexFnInferencesPerCycle = 40;  // Number of samples in one cycle 
const float kComplexFnXrange = 2*3.14159265359f;   // Full complex Fn wave not 2pi

void setup() {

    bool sine_res;
    bool CF_res;
    
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(BUILT_IN_LED, OUTPUT);  
    
    Serial.begin(500000);  // changed it from the previous value 115200 to max 500,000 to improve serial data rate
    delay(500);
    
#ifdef PLOT    
    Serial.println("Actual Predicted"); // To print the labels of the values being plotted.
#endif

    // Make sure that the Msg Q is created first before creating the tasks that are going to operate on this Q
    xQHandle = xQueueCreate(NUM_Q_ITEMS, sizeof(Y_VALUES));

    // Initialize the models before the inference engine tasks are created.
    // Note that the model initialization (calling begin() of TFLite lib) needs to be done on one model after the other
    // individual interpreter object is created by begin() and maintained within the each model object.
    sine_res = mSine.begin(sine_2L_model_tflite);
    CF_res = mCF.begin(cmplx_sine_2L_model_tflite);

    // If any of the models were not initialized properly do not create any of the Inference engines
    if(sine_res != true){
        Serial.println("ERROR: setup(): Sine TFLite model begin() failed\n");
        return;// This takes the control to loop() which runs forever
    }
    
    if(CF_res != true){
        Serial.println("ERROR: setup(): CF TFLite model begin() failed\n");
        return; // This takes the control to loop() which runs forever
    }
        
    // This plotTask is created from setup() running on Core 1, the created task is pinned to Core 0
    xTaskCreatePinnedToCore(
              plotTask,           /* Task function which runs on Core 0*/
              "PlotTask",         /* String with the name of task. */
              PLOT_TASK_STACK_SIZE,     /* Stack size in words. */
              (void *)&plotTaskParam,   /* Parameter passed as input of the task */
              2,                     /* Priority of the task. */
              &plotTaskHandle,       /* Task handle. */
              0);                    /* Should always run on Core 0, which is Protocol Core */

    // This inferenceTask is created from setup() running on Core 1, the created task is also pinned to Core 1
    xTaskCreatePinnedToCore(
              InferenceTask,           /* Task function which runs on Core 1 */
              "InferenceTask",         /* String with the name of task. */
              INFERENCE_TASK_STACK_SIZE,     /* Stack size in words. */
              (void *)&InferenceTaskParam,   /* Parameter passed as input of the task */
              2,                      /* Priority of the task. */
              &InferenceTaskHandle,   /* Task handle. */
              1);                     /* Should always run on Core 1, which is Application Core */

} // end of setup()

void loop() { // This runs on Core 1 to just blink the built-in LED which shares the Core 1 with CF task
  
  digitalWrite(BUILT_IN_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                        // wait for a second
  digitalWrite(BUILT_IN_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);     
  
} // end of loop()

// Sine Inference related variables
float sine_x_val;
Y_VALUES sine_y_vals;
float sine_input[1];

void SineInferenceEngine(void) {
  
    float position = static_cast<float>(sine_inference_count) /
                          static_cast<float>(kSineInferencesPerCycle);
    sine_x_val = position * kSineXrange;
    sine_input[0] = sine_x_val;
    
    sine_y_vals.y_actual = (float)sin(sine_x_val);
    
    sine_y_vals.y_pred = mSine.predict(sine_input);
     
    // Enlarge the value so that the plot is enhanced on the Serial Plotter
    sine_y_vals.y_actual *= 3;
    sine_y_vals.y_pred *= 3;
    
    bool res =  xQueueSend(xQHandle, &sine_y_vals, pdMS_TO_TICKS(2000));
    if (!res) {
      printf("SineInferenceEngine: MsgQ: Failed to send an item.\n");
    }
    
    sine_inference_count += 1;
    if (sine_inference_count >= kSineInferencesPerCycle) 
      sine_inference_count = 0;
      
#ifndef PLOT
    delay(1000); // 1 second of delay between two predictions to be seen on the Serial monitor
    Serial.print("SineInferenceTask(): Executing on core ");
    Serial.println(xPortGetCoreID());
#endif

} // end of SineInferenceEngine()


void InferenceTask(void * parameter) {

  while(1){
    SineInferenceEngine();
    ComplexFnInferenceEngine();
    delay(50);    // Delay by 100 msec between two predictions to view the plot on the screen
  }

} // end of ComplexFnInferenceTask()


// Complex Fn Inference related variables
float cf_x_val;
Y_VALUES cf_y_vals;
float cf_input[1];

void ComplexFnInferenceEngine(void) {
    uint32_t startTime;
    uint32_t timeIt;  
    cf_y_vals.task_type = CF_TASK;
  
    float position = static_cast<float>(complex_fn_inference_count) /
                     static_cast<float>(kComplexFnInferencesPerCycle);
    cf_x_val = position * kComplexFnXrange;
    cf_input[0] = cf_x_val;
    
    cf_y_vals.y_actual = (float)(5 * pow((double)sin(cf_x_val), 2.0) 
                                  + 4 * cos(cf_x_val));
                              
    startTime = micros();
    cf_y_vals.y_pred = mCF.predict(cf_input);
    timeIt = micros() - startTime;

    // Enlarge the value so that the plot is enhanced on the Serial Plotter
    cf_y_vals.y_actual *= 1;
    cf_y_vals.y_pred *= 1;
    
    bool res =  xQueueSend(xQHandle, &cf_y_vals, pdMS_TO_TICKS(2000));
    if (!res) {
      printf("ComplexFnInferenceEngine: MsgQ: Failed to send an item from Complex Fn inference.\n");
    }
    
    complex_fn_inference_count += 1;
    if (complex_fn_inference_count >= kComplexFnInferencesPerCycle) 
      complex_fn_inference_count = 0;
      
#ifndef PLOT
    delay(1000); // 1 second of delay between two predictions to be seen on the Serial monitor
    Serial.print("ComplexFnInferenceTask(): Executing on core ");
    Serial.println(xPortGetCoreID());
#endif

} // end of ComplexFnInferenceEngine()

void plotTask(void * parameter) {
  Y_VALUES rxY_vals;
  bool res;

#ifndef PLOT
  Serial.print("Entering plotTask. It is running on the core ");
  Serial.println(xPortGetCoreID());
  Serial.printf("plotTask: Param received is %d\n", *(int*)parameter);
#endif

  while(1){
#ifndef PLOT    
    delay(1000);
    Serial.print("plotTask running on core: ");
    Serial.println(xPortGetCoreID());
#endif

    res = xQueueReceive(xQHandle, &rxY_vals, pdMS_TO_TICKS(2000));
    if(res){
#ifndef PLOT
      Serial.printf("MsgQ: Received y_actual: %f y_pred: %f\n", rxY_vals.y_actual, rxY_vals.y_pred);
#endif
    }
    else
      Serial.printf("MsgQ: Failed to receive data\n");

#ifdef PLOT
    plot(rxY_vals);
#endif
  } // end of while(1)
  
} // end of plotTask()

void plot(Y_VALUES y_vals){
    static float y_actual_sine;
    static float y_pred_sine;
    static float y_actual_cf;
    static float y_pred_cf;

    if(y_vals.task_type == SINE_TASK){
        y_actual_sine = y_vals.y_actual;
        y_pred_sine = y_vals.y_pred;
    }else if(y_vals.task_type == CF_TASK){
        y_actual_cf = y_vals.y_actual;
        y_pred_cf = y_vals.y_pred;    
    }
    Serial.print(-8);  // To freeze the lower limit
    Serial.print(",");
    Serial.print(+8);  // To freeze the upper limit
    Serial.print(","); 

    Serial.print(y_actual_sine);  // Plot the actual value
    Serial.print(", ");
    Serial.print(y_pred_sine);     // Plot the predicted value
    Serial.print(", ");  
    Serial.print(y_actual_cf);  // Plot the actual value
    Serial.print(", ");
    Serial.print(y_pred_cf);     // Plot the predicted value
    Serial.print(", ");      
    Serial.println(0.0);     // Draw the zero 
    Serial.print(", ");
    Serial.println(); 

} // end of plot()

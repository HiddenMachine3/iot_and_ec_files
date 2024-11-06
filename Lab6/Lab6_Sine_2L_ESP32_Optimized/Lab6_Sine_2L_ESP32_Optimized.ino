#include <math.h>

// Define PLOT when you want to get the output to be plotted using Serial Plotter
#define PLOT

// You can keep reducing the stack size to see where it fails but never set it to just above lower limit you find
#define PLOT_TASK_STACK_SIZE 4000       // Currently it fails when the size is set to 500
#define INFERENCE_TASK_STACK_SIZE 4000  // Currently it fails when the size is set to 500

extern float predict(float x);
void plot(float y_actual, float y_pred);

#define BUILT_IN_LED 2  // For ESP32

TaskHandle_t inferenceTaskHandle;
int inferenceTaskParam = 0x1234;
TaskHandle_t plotTaskHandle;
int plotTaskParam = 0x5678;

#define NUM_Q_ITEMS 10
QueueHandle_t xQHandle;
typedef struct {
  float y_actual;
  float y_pred;
} Y_VALUES;

int inference_count = 0;                   // Perform Inference using the model with values of x ranging from 0 to 2pi Radians
const int kInferencesPerCycle = 20;        // Number of samples in one cycle old value 1000
const float kXrange = 2 * 3.14159265359f;  // Full sine wave not 2pi

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(BUILT_IN_LED, OUTPUT);

  Serial.begin(500000);  // changed it from the previous value 115200 to max 500,000 to improve serial data rate
  delay(500);

#ifdef PLOT
  Serial.println("Actual Predicted");  // To print the labels of the values being plotted.
#endif

  xQHandle = xQueueCreate(NUM_Q_ITEMS, sizeof(Y_VALUES));

  // This plotTask is created from setup() running on Core 1, the created task is pinned to Core 0
  xTaskCreatePinnedToCore(
    plotTask,               /* Task function which runs on Core 0*/
    "PlotTask",             /* String with the name of task. */
    PLOT_TASK_STACK_SIZE,   /* Stack size in words. */
    (void *)&plotTaskParam, /* Parameter passed as input of the task */
    2,                      /* Priority of the task. */
    &plotTaskHandle,        /* Task handle. */
    0);                     /* Should always run on Core 0, which is Protocol Core */

  // This inferenceTask is created from setup() running on Core 1, the created task is also pinned to Core 1
  xTaskCreatePinnedToCore(
    inferenceTask,               /* Task function which runs on Core 1 */
    "InferenceTask",             /* String with the name of task. */
    INFERENCE_TASK_STACK_SIZE,   /* Stack size in words. */
    (void *)&inferenceTaskParam, /* Parameter passed as input of the task */
    2,                           /* Priority of the task. */
    &inferenceTaskHandle,        /* Task handle. */
    1);                          /* Should always run on Core 1, which is Application Core */

}  // end of setup()

void loop() {  // This runs on Core 1 to just blink the built-in LED

  digitalWrite(BUILT_IN_LED, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(BUILT_IN_LED, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);

}  // end of loop()

void inferenceTask(void *parameter) {

  while (1) {
    inferenceEngine();
    delay(100);  // Delay by 1 msec between two predictions to view the plot on the screen
  }

}  // end of inferenceTask()

// Inference related variables
float x_val;
Y_VALUES sine_y_vals;

void inferenceEngine(void) {


  float position = static_cast<float>(inference_count) / static_cast<float>(kInferencesPerCycle);
  x_val = position * kXrange;

  sine_y_vals.y_actual = sin(x_val);


  sine_y_vals.y_pred = predict(x_val);


  // Enlarge the value so that the plot is enhanced on the Serial Plotter
  sine_y_vals.y_actual *= 3;
  sine_y_vals.y_pred *= 3;

  bool res = xQueueSend(xQHandle, &sine_y_vals, pdMS_TO_TICKS(0));
  if (!res) {
    printf("MsgQ: Failed to send an item.\n");
  }

  inference_count += 1;
  if (inference_count >= kInferencesPerCycle)
    inference_count = 0;

#ifndef PLOT
  delay(1000);  // 1 second of delay between two predictions to be seen on the Serial monitor
  Serial.print("inferenceTask(): Executing on core ");
  Serial.println(xPortGetCoreID());
#endif

}  // end of inferenceEngine()

void plotTask(void *parameter) {
  Y_VALUES rxY_vals;
  bool res;

#ifndef PLOT
  Serial.print("Entering plotTask. It is running on the core ");
  Serial.println(xPortGetCoreID());
  Serial.printf("plotTask: Param received is %d\n", *(int *)parameter);
#endif

  while (1) {
#ifndef PLOT
    delay(1000);
    Serial.print("plotTask running on core: ");
    Serial.println(xPortGetCoreID());
#endif

    res = xQueueReceive(xQHandle, &rxY_vals, pdMS_TO_TICKS(2000));
    if (res) {
#ifndef PLOT
      Serial.printf("MsgQ: Received y_actual: %f y_pred: %f\n", rxY_vals.y_actual, rxY_vals.y_pred);
#endif
    } else
      Serial.printf("MsgQ: Failed to receive data\n");

#ifdef PLOT
    plot(rxY_vals.y_actual, rxY_vals.y_pred);
#endif
  }  // end of while(1)

}  // end of plotTask()

void plot(float y_actual, float y_pred) {
  Serial.print(-3);  // To freeze the lower limit
  Serial.print(",");
  Serial.print(+3);  // To freeze the upper limit
  Serial.print(",");

  //Serial.print("y_actual");
  Serial.print(y_actual);  // Plot the actual value
  Serial.print(", ");      /// replaced /t by comma
  //Serial.print("y_pred");
  Serial.print(y_pred);  // Plot the predicted value
  Serial.print(", ");    // earlier print with the below line included. removed below line
  //Serial.print("zero");
  Serial.println(0.0);  // Draw the zero
  Serial.print(", ");
  Serial.println();
}  // end of plot()

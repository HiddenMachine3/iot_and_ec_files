
// IPC: Inter-processor Communication between two cores of ESP32
// Extended feature to FreeRTOS for ESP32
// Ref: https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/system/ipc.html

// For the Lab 4 exp A

// To demonstrate Inter-Processor Communicaiton between two cores of ESP32
// Exchange one message from each core to the other.
// Run a fn run_onCore0() by sending paramToCore0Fn to it by the task running on Core 1 (from loop())
// Similarly run a fn run_onCore1() by sending a number 4567 to it by the task running on Core 0 (from the task core0_Task())
// In each of these functions print the core ID it is running on, to verify that it is run on the specific core.

#include "esp_ipc.h"

#define LED_ESP32_BUILTIN 2
#define NUM_OF_ITERATIONS 10

int no_of_iterations = NUM_OF_ITERATIONS;
int paramTask = 1234;
int paramToCore0Fn = 4567;
int paramToCore1Fn = 0xABCD;

void run_onCore0(void * param){
  Serial.printf("Entered run_onCore0() with the parameter %d\n", *(int*)param);
  Serial.printf("This function is running on the core %d\n", xPortGetCoreID());
  Serial.printf("Exiting the function run_onCore0()\n");  
}

void run_onCore1(void * param){
  Serial.printf("Entered run_onCore1() with the parameter %X\n", *(int*)param);
  Serial.printf("This function is running on the core %d\n", xPortGetCoreID());
  Serial.printf("Exiting the function run_onCore1()\n");  
}

void setup() {
  // put your setup code here, to run once:
  static int cpuID_0 = 0;
  static esp_ipc_func_t esp_ipc_fn0Ptr = run_onCore0;

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_ESP32_BUILTIN, OUTPUT); 
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);

  esp_reset_reason_t reason = esp_reset_reason();
  Serial.printf("Reset reason: %d\n", reason);

  Serial.print("Setup: Executing on core ");
  Serial.println(xPortGetCoreID());

  Serial.printf("setup() is going to call the function run_onCore0() once, using esp_ipc_call_blocking()");
  esp_ipc_call_blocking(cpuID_0, esp_ipc_fn0Ptr, (void*)&paramToCore0Fn);

  delay(100);
  
  // This task is created while this is code is running on Core 1 and the created task runs on Core 0
  xTaskCreatePinnedToCore(
                core0_Task,        /* Task function which runs on Core 0*/
                "Core0_Task",      /* String with name of task. */
                10000,             /* Stack size in words. */
                (void *)&paramTask,   /* Parameter passed as input of the task */
                2,                /* Priority of the task. */
                NULL,             /* Task handle. */
                0);               /* Core ID = 0*/
  delay(100);
  
}

void loop() { // setup() and loop() are run on Core 1 by default

  static int cpuID_0 = 0;
  static esp_ipc_func_t esp_ipc_fn0Ptr = run_onCore0;
  
  // put your main code here, to run repeatedly:
  Serial.print("This loop() is running on the core ID: ");
  Serial.println(xPortGetCoreID());
  
  digitalWrite(LED_ESP32_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for 2 Secs
  digitalWrite(LED_ESP32_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
}


void core0_Task(void *paramIn){
    static int cpuID_1 = 1;
    static esp_ipc_func_t esp_ipc_fn1Ptr = run_onCore1;  
      
    Serial.printf("Created the task: Executing core0_Task on the core ID: %d\n", xPortGetCoreID());
    Serial.printf("core0_Task: Param received is %d\n ", *(int*)paramIn);

    while(no_of_iterations){
      delay(6000); // wait for 6 seconds
      esp_ipc_call_blocking(cpuID_1, esp_ipc_fn1Ptr, (void*)&paramToCore1Fn);
      paramToCore1Fn++;
      no_of_iterations--;
      Serial.printf("core0_Task is running on %d\n", xPortGetCoreID());

    }
    Serial.printf("core0_Task is going to get deleted now ... ");
    
    // Make sure that the task created does not return, if it does, it creates an exception
     vTaskDelete(NULL);    // Delete the task now.
    
} // end of core0_Task()

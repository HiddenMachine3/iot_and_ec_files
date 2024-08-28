
//#include <freertos/queue.h>

// For Lab 4
// To demonstrate Message queue between tasks

#define LED_ESP32_BUILTIN 2
#define NUM_ITERATIONS    10

#define NUM_Q_ITEMS 10
int paramTx = 1234;
int paramRx = 5678;

QueueHandle_t xQueue1, xQueue2;

void setup() {
  // put your setup code here, to run once:

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_ESP32_BUILTIN, OUTPUT);
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
  
  Serial.println("This program demonstrates Msg Qs");

  Serial.print("Setup(): Executing on core ");
  Serial.println(xPortGetCoreID());

  xQueue1 = xQueueCreate(NUM_Q_ITEMS, sizeof(int));
  xQueue2 = xQueueCreate(NUM_Q_ITEMS, sizeof(int));
  
  if (xQueue1 == NULL || xQueue2 == NULL ) {
    delay(10000); // This delay is introduced to enable us to view this output on Serial monitor, before it exits.
    printf("ERROR: Failed to create Msg Qs\n"); 
       
    // Exit because Tx and Rx tasks should not be created if Msg Q was not created successfully.
    vTaskDelete(NULL);    
  }


  xTaskCreate(
    txTask,       /* Task function. to send data to Msg Q*/
    "txTask",     /* String with name of task. */
    10000,             /* Stack size in bytes. */
    (void *)&paramTx,   /* Parameter passed as input of the task */
    2,                 /* Priority of the task. */
    NULL);             /* Task handle. */
    
  delay(100); // Allow txTask to run first before the rxTask gets created below
  
  xTaskCreate(
    rxTask,       /* Task function. to receive data from Msg Q*/
    "rxTask",     /* String with name of task. */
    10000,             /* Stack size in bytes. */
    (void *)&paramRx,   /* Parameter passed as input of the task */
    2,                 /* Priority of the task. */
    NULL);             /* Task handle. */

  delay(2000);
} // end of setup()

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_ESP32_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                             // wait for 3 secs
  digitalWrite(LED_ESP32_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);
  Serial.println("loop() is running ...");
}

void txTask(void * parameter) {
  int txItem = 101;
  int rxItem = 0;

  Serial.print("Entering txTask. It is running on the core ");
  Serial.println(xPortGetCoreID());
  Serial.printf("txTask: Param received is %d\n", *(int*)parameter);
  
  for (int i = 0; i < NUM_ITERATIONS; i++) {
    //Send an item
    Serial.printf("txTask: Going to send %d to rxTask\n", txItem);
    
    bool res =  xQueueSend(xQueue1, &txItem, pdMS_TO_TICKS(2000));
    if (!res) {
      printf("txTask: Failed to send an item.\n");
    }
    
    Serial.printf("txTask: My data %d to rxTask was sent\n", txItem);
    Serial.printf("txTask: Going to wait for receiving an item from rxTask\n");
    
    // now wait for the message from the rxTask on Queue2
    res = xQueueReceive(xQueue2, &rxItem, pdMS_TO_TICKS(2000));
    if(res)
      Serial.printf("txTask: Received %d from rxTask\n\n", rxItem);
    else
      Serial.printf("txTask: Failed to receive item from rxTask on xQueue2\n");
      
    txItem++;
    delay(2000);
  }
  Serial.println("Tx Task is exiting ...");
  vTaskDelete(NULL);
}

void rxTask(void * parameter) {
  int txItem = 501;
  
  Serial.print("Entering rxTask. It is running on the core ");
  Serial.println(xPortGetCoreID());
  Serial.printf("rxTask: Param received is %d\n", *(int*)parameter);

  for (int i = 0; i < NUM_ITERATIONS; i++) {
    //Receive an item first from txTask
    rxFromMsgQ();
    
    Serial.printf("rxTask: Going to send an item to txTask\n");
    bool res =  xQueueSend(xQueue2, &txItem, pdMS_TO_TICKS(2000));
    if(res)
      Serial.printf("rxTask: My data %d to txTask was sent\n", txItem);
    else
      Serial.printf("rxTask: Failed to send an item to txTask\n");

    txItem++;
    delay(2000);
  }
  Serial.println("Rx Task is exiting ...");
  vTaskDelete(NULL);
}

void rxFromMsgQ(void) {
  //Receive an item from message queue from txTask
  size_t item_size = sizeof(int);
  bool res;

  int rxItem = 0;
  
    res = xQueueReceive(xQueue1, &rxItem, pdMS_TO_TICKS(2000));
    if(res)
      Serial.printf("rxTask: Received %d from txTask\n", rxItem);
    else
      Serial.printf("rxTask: Failed to receive data from txTask\n");
      
} // end of exFromMsgQ()

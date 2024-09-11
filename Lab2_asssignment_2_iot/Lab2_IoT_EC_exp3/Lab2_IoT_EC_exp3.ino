#include <Arduino.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define LED_ESP32_BUILTIN 2

char *taskNames[10];

void taskFunction(void *parameter) {
    char *taskName = (char *)parameter;

    while (true) {
        Serial.printf("Task %s running on core %d\n", taskName, xPortGetCoreID());
        vTaskDelay(2000 / portTICK_PERIOD_MS); 
    }
}

void init_task_names(const char *prefix) {
    for (int i = 0; i < 10; i++) {
        taskNames[i] = (char *)malloc(20);
        sprintf(taskNames[i], "%s%d", prefix, i);
    }
}

void create_tasks() {
    for (int i = 0; i < 10; i++) {
        BaseType_t coreId = i % 2;
        xTaskCreatePinnedToCore(
            taskFunction,        
            taskNames[i],        
            10000,               
            (void *)taskNames[i],
            1,                   
            NULL,                
            coreId               
        );
        vTaskDelay(200 / portTICK_PERIOD_MS); 
    }
}

void setup() {
    Serial.begin(115200);
    pinMode(LED_ESP32_BUILTIN, OUTPUT);

    init_task_names("My_Task");
    create_tasks();
}

void loop() {
    digitalWrite(LED_ESP32_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_ESP32_BUILTIN, LOW);
    delay(1000);
}

#include <stdio.h>
#include <FreeRTOS.h>
#include <task.h>

void vTaskCode(void *pvParameters) {
    for (;;) {
        printf("Hello from FreeRTOS task!\n");
        vTaskDelay(pdMS_TO_TICKS(1000)); // Delay for 1000 ms
    }
}

int main(void) {
    // Create a task
    xTaskCreate(vTaskCode, "Task1", 1000, NULL, 1, NULL);
    
    // Start the scheduler
    vTaskStartScheduler();
    
    // Should never reach here
    for (;;) {}
    
    return 0;
}
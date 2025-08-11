#include <mbed.h>

DigitalOut led(LED1);
AnalogIn pot(A0);

int main() {
    while (true) {
        // Read the potentiometer value and scale it to a range suitable for LED brightness
        float potValue = pot.read(); // Value between 0.0 and 1.0
        led = potValue; // Set LED brightness based on potentiometer value
        wait(0.1); // Wait for a short period
    }
}
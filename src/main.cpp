#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author Saurav Gautam
 * @date 2026-02-27
 */

// TODO 1:
// Define FSR analog pin (Use A0)
const int fsrPin = A0;

// TODO 2:
// Create variable to store sensor reading
int fsrValue = 0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    Serial.println("==================================");
    Serial.println(" FSR Force Measurement System ");
    Serial.println(" System Initialized Successfully ");
    Serial.println("==================================");
}

void loop() {

    // TODO 5:
    // Read analog value from FSR
    fsrValue = analogRead(fsrPin);

    // TODO 6:
    // Print raw ADC value
    Serial.print("Raw ADC Value: ");
    Serial.println(fsrValue);

    // TODO 7 & 8:
    // Apply simple threshold logic (detect pressure)
    if (fsrValue > 100) {   // Threshold (adjust if needed)
        Serial.println("Pressure Detected");
    }
    else {
        Serial.println("No Pressure");
    }

    Serial.println("----------------------------");

    // TODO 9:
    // Add delay (500ms or 1 second)
    delay(1000);
}
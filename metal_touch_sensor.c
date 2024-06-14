/*
    Project name : Metal touch sensor module
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-metal-touch-sensor-module
*/

const int touchSensorPin = 2; // Digital pin connected to the metal touch sensor module
int metalDetected = 0; // Variable to store metal detection state

void setup() {
  pinMode(touchSensorPin, INPUT); // Set the pin as input
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the state of the metal touch sensor
  metalDetected = digitalRead(touchSensorPin);

  // Check if metal is detected
  if (metalDetected == HIGH) {
    Serial.println("Metal Detected!");
  } else {
    Serial.println("No Metal Detected");
  }

  delay(100); // Add a small delay to avoid spamming the Serial Monitor
}

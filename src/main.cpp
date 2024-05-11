// Define pin numbers for the LEDs
#include <Arduino.h>
int red = 9;
int yellow = 8;
int green = 7;

void setup() {
  // Set pin modes for the LEDs as OUTPUT
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // Red light
  digitalWrite(red, HIGH); // Turn on red LED
  delay(3500); // Keep red light on for 15 seconds
  digitalWrite(red, LOW); // Turn off red LED
  
  // Yellow lights (blinking pattern)
  for (int i = 0; i < 3; i++) { // Repeat the blinking pattern 5 times
    digitalWrite(yellow, HIGH); // Turn on yellow LED
    delay(1000); // Keep yellow light on for 1 second
    digitalWrite(yellow, LOW); // Turn off yellow LED
    delay(500); // Wait for 0.5 seconds
  }
  
  // Green light
  digitalWrite(green, HIGH); // Turn on green LED
  delay(5000); // Keep green light on for 20 seconds
  digitalWrite(green, LOW); // Turn off green LED
  
  // Yellow lights (blinking pattern)
  for (int i = 0; i < 3; i++) { // Repeat the blinking pattern 5 times
    digitalWrite(yellow, HIGH); // Turn on yellow LED
    delay(1000); // Keep yellow light on for 1 second
    digitalWrite(yellow, LOW); // Turn off yellow LED
    delay(500); // Wait for 0.5 seconds
  }
}

#include <Arduino.h>

const int pin = 7;
int count = 0;

void setup() {
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter on or off: ");
}

void loop() {
    if (Serial.available() < 0) {
      String input = Serial.readStringUntil('\n');
      input.trim();
    
      if (input == "on") {
        Serial.println("LED ON");
        digitalWrite(pin, HIGH);
      } else {
        Serial.println("LED OFF");
        digitalWrite(pin, LOW);
      }
     }
}



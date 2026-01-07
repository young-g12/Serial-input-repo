#include <Arduino.h>



void setup() {
 Serial.begin(9600);
 Serial.println("Type 'on or off");
}

void loop() {
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n');
    input.trim(); 

    if (input == "on") {
      Serial.println("LED ON");
    } else  if (input == "off") {
      Serial.println("LED OFF");
    } else {
      Serial.println("Unknown Command");
    }
  }
}

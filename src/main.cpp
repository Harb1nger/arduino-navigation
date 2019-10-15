#include <Arduino.h>

//test comment

int x;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  for(x = 15; x < 100; x++) {
    digitalWrite(13, HIGH);
    delay(x);
    digitalWrite(13, LOW);
    delay(x);
  }
}
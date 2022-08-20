#include <Arduino.h>
#include <string>

#include "ground.cpp"

Ground ground;

void setup() {
  Serial.begin(115200);
  Serial.println("Started");
  ground = Ground();
  Serial.println("Setting up ground");
  ground.setup();
  Serial.println("Ground setup");
}

void loop() {
  String message = ground.receiveData();
  if (message) { 
    Serial.println(message);
  }
}
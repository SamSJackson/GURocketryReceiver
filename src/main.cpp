#include <Arduino.h>
#include <string>

#include "ground.cpp"

Ground ground;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

  ground = Ground();
  Serial.println("Setting up ground");
  ground.setup();
  Serial.println("Ground setup");
}

void loop() {
  String message = ground.receiveData();
  Serial.println(message);
}
#include <Arduino.h>

#include "ground.cpp"

Ground ground;

void setup() {
  ground = Ground();
  ground.setup();
}

void loop() {
  ground.receiveData();
}
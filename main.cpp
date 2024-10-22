#include "ledblink.h"
#include <Arduino.h>

// LED on pin 13
Blink LED(D1);

void setup() {
  // no initialization needed
}

void loop() {
  // Blink LED every 250 milliseconds
  LED.blinkRate(250);
}
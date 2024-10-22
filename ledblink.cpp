#include "ledblink.h"

Blink::Blink(int pin) {
    this->_pin = pin;
    pinMode(_pin, OUTPUT);
}

void Blink::blinkRate(int rate) {
    digitalWrite(_pin, HIGH);
    delay(rate);
    digitalWrite(_pin, LOW);
    delay(rate);
}

#ifndef LEDBLINK_H
#define LEDBLINK_H
#include <Arduino.h>

class Blink {
public:
    Blink(int pin);
    void blinkRate(int rate);
private:
    int _pin;
};
#endif
#include "Arduino.h"
#include "Led.h"

Led::Led(byte pin) {
    this->pin = pin;
    init();
}

void Led::init() {
    pinMode(pin, OUTPUT);
}

void Led::on() {
    digitalWrite(pin, HIGH);
}

void Led::off() {
    digitalWrite(pin, LOW);
}

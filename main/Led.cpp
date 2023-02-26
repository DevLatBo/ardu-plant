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
    delay(2000);
}

void Led::off() {
    digitalWrite(pin, LOW);
    delay(2000);
}

#include "Sensor.h"

Sensor::Sensor(uint8_t pPin, uint8_t pType): pin(pPin), type(pType), dht(pPin, pType) {
}

void Sensor::init() {
    dht.begin();
}

float Sensor::getTemperature() {
    float temperature = dht.readTemperature();
    return temperature;
}

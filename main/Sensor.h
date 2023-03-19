#ifndef DHT_h
#define DHT_h
#include <DHT.h>

class Sensor {
    private:
        uint8_t pin;
        uint8_t type;
        DHT dht;

    public: 
        Sensor(uint8_t pPin, uint8_t pType);
        void init();
        float getTemperature();
};
#endif
#ifndef SensorDht_h
#define SensorDht_h

#include "Arduino.h"
#include <DHT.h>

class Dht {
  DHT dht;
  
  public:
    Dht(int _pinSensor, uint8_t _sensorType);
    
    void initiate();
    float readHumidity();
    String showHumidity(float h);
};

#endif

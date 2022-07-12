#include "sensorDht.h"

Dht::Dht(int _pinSensor, uint8_t _sensorType):
  dht(_pinSensor, _sensorType){
}

void Dht::initiate(){
  dht.begin();
}

float Dht::readHumidity() {
  return dht.readHumidity();
}

String Dht::showHumidity(float h) {
  String dataH = "";
  dataH.concat(h);
  return dataH+"%";
}

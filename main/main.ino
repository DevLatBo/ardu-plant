#include "Led.h"
#include "Sensor.h"
//#include <DHT.h>

#define LED_PIN 13

#define DHTPIN 2
#define DHTTYPE DHT11

Led led1(LED_PIN);
//DHT dht(DHTPIN, DHTTYPE);
Sensor sensor(DHTPIN, DHTTYPE);

void setup() {
  sensor.init();
  Serial.begin(9600);
}

void loop() {
  led1.on();
  float temp = sensor.getTemperature();
  delay(500);
  if(isnan(temp)) {
    Serial.println("Temp Error Sensor");
    return;
  }
  Serial.println(temp);
  led1.off();
}

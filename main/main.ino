#include "Led.h"
#include <DHT.h>

#define LED_PIN 13

#define DHTPIN 2
#define DHTTYPE DHT11

Led led1(LED_PIN);
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  dht.begin();
  Serial.begin(9600);
}

void loop() {
  led1.on();
  float temp = dht.readTemperature();

  if(isnan(temp)) {
    Serial.println("Temp Error Sensor");
    return;
  }
  Serial.println(temp);
  led1.off();
}

#include "Led.h"
#include "Sensor.h"

#define LED_PIN 13

#define DHTPIN 2
#define DHTTYPE DHT11

Led led1(LED_PIN);
Sensor sensor(DHTPIN, DHTTYPE);

void setup() {
  sensor.init();
  Serial.begin(9600);
}

void loop() {
  led1.on();
  float temp = sensor.getTemperature();
  delay(1000);
  if(isnan(temp)) {
    Serial.println("Temp Error Sensor");
    return;
  }
  Serial.println(temp);
  led1.off();
}

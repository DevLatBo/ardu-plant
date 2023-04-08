#include "Led.h"
#include "Sensor.h"
#include "Screen.h"

#define LED_PIN 13

#define DHTPIN 2
#define DHTTYPE DHT11

#define ANCHO_PANTALLA 128
#define ALTO_PANTALLA 64

Led led1(LED_PIN);
Sensor sensor(DHTPIN, DHTTYPE);
Screen screen(ANCHO_PANTALLA, ALTO_PANTALLA);

void setup() {
  sensor.init();
  screen.initScreen();
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
  screen.showData();
  led1.off();
}

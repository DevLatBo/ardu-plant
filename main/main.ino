#include "Led.h"
#include "Screen.h"

#define LED_PIN 13

#define ANCHO_PANTALLA 128
#define ALTO_PANTALLA 64

Led led1(LED_PIN);
Screen screen(ANCHO_PANTALLA, ALTO_PANTALLA);

void setup() {
  screen.initScreen();
  screen.initSensor();
  Serial.begin(9600);
}

void loop() {
  led1.on();
  screen.showData();
  delay(1000);
  led1.off();
}

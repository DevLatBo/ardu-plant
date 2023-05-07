#ifndef SCREEN_h
#define SCREEN_h

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include "Sensor.h"

class Screen {
    private:
        uint8_t _ancho;
        uint8_t _alto;
        Adafruit_SSD1306 display;
        Sensor sensor{2,11};

    public:
        Screen(uint8_t ancho, uint8_t alto);
        void initScreen();
        void initSensor();
        void showData();
};

#endif
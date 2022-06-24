#ifndef OledScreen_h
#define OledScreen_h

#include "Arduino.h"
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

class Oled {
  Adafruit_SSD1306 display;
  
  private:
    int ancho;
    int alto;
    int pinReset;

  public:
    Oled(int _ancho, int _alto, int _pinReset);
    void validateScreen();
    void clearScreen();
    void drawImage();
    void adjustProperties(int textSize);
    void printInformation(String humidity);
    
};

#endif

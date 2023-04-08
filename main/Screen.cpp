#include "Screen.h"

Screen::Screen(uint8_t ancho, uint8_t alto): _ancho(ancho), _alto(alto),  display(ancho, alto, &Wire, -1){
    _ancho = ancho;
    _alto = alto;
}

void Screen::initScreen() {
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
}

void Screen::showData() {
    display.setCursor(10,32);
    display.println("Esta es una prueba");
}
#include "OledScreen.h"

Oled::Oled(int _ancho, int _alto, int _pinReset){
  ancho = _ancho;
  alto = _alto;
  pinReset = _pinReset;
}

void Oled::initiateDisplay() {
  Adafruit_SSD1306 display(ancho, alto, &Wire, pinReset);
}

void Oled::validateScreen() {
  #ifdef __DEBUG__
    Serial.begin(9600);
    delay(100);
    Serial.println("Iniciando pantalla OLED");
  #endif
    // Iniciar pantalla OLED en la dirección 0x3C
    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
  #ifdef __DEBUG__
      Serial.println("No se encuentra la pantalla OLED");
  #endif
      for(;;); // No hacer nada
    }
}

void Oled::clearScreen() {
  display.clearDisplay();
}

void Oled::drawImage(unsigned char imageData[]) {
  display.drawBitmap(29, 18, imageData, 69, 46, SSD1306_WHITE);
}

void Oled::sendData() {
  display.display();
}

void Oled::adjustProperties(int textSize) {
  display.setTextSize(textSize);
  display.setTextColor(SSD1306_WHITE);
}

void Oled::printInformation(String humidity) {
  display.setCursor(0,0);
  display.println("Humedad(E):");
  display.setCursor(0,10);
  display.println(humidity);
  display.setCursor(0,20);
  display.println("Humedad(I):");
  display.setCursor(0,30);
  display.println("0.0%");
}

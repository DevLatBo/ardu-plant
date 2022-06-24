

#include "sensorDht.h"
#include "OledScreen.h"
 
// Definir constantes
#define ANCHO_PANTALLA 128 // ancho pantalla OLED
#define ALTO_PANTALLA 64 // alto pantalla OLED
#define OLED_RESET -1 // pin de reinicio

Oled oled(ANCHO_PANTALLA, ALTO_PANTALLA, OLED_RESET);

// Sensor de Humedad
#define DHTPIN 2
#define DHTTYPE DHT11
Dht Dht(DHTPIN, DHTTYPE);

 
void setup() {
  oled.validateScreen();
  
  // Clear the buffer.
  oled.clearScreen();
  
  // Draw bitmap on the screen
  oled.drawImage();
  
  // Initiate DHT11
  Dht.initiate();
}
 
void loop() {
  delay(1000);
  float h = Dht.readHumidity();
  oled.clearScreen();
  oled.adjustProperties(1);
  String humidity = Dht.showHumidity(h);
  oled.printInformation(humidity);
}

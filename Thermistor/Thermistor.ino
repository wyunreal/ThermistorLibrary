#include "Thermistor.h"

Thermistor thermistor(A0, 8);

void setup() {
  Serial.begin(9600);
}

void loop() {
  float temperature = thermistor.readTemperature();
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");
  delay(1000);
}


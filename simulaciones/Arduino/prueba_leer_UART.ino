#include <string.h>
#define analogOutputPin 25
#define LED 2

int analogOutputValue = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
 if (Serial.available() > 0)
 {
  analogOutputValue = Serial.parseInt();
  if (analogOutputValue >= 0 && analogOutputValue <=255)
  {
    dacWrite(analogOutputPin, analogOutputValue);
    Serial.print("Valor de salida: ");
    Serial.print(analogOutputValue);
    Serial.print("\n");
  }
  else
  {
    Serial.print("Valor Incorrecto. Ingresar otro");
  }
 }
 delay(2000);
}

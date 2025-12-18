#include <string.h>
#define analogOutputPin 25
#define analogOutputPin 26
#define LED 2

int analogOutputValue = 0;

void setup() {
  Serial.begin(115200);
}

/*void loop() {
  for (int i=0; i<=144; i=i+2)
  {
    dacWrite(analogOutputPin, i);
    delay(250);
  }
}*/


void loop() {
    dacWrite(analogOutputPin, 62); // G3
    delay(175);
    dacWrite(analogOutputPin, 58); // F3
    delay(175);
    dacWrite(analogOutputPin, 56); // E3
    delay(175);
    dacWrite(analogOutputPin, 58); // F3
    delay(175);
    dacWrite(analogOutputPin, 62); // G3
    delay(175);
    dacWrite(analogOutputPin, 66); // A3
    delay(175);
    dacWrite(analogOutputPin, 70); // B3
    delay(175);
    dacWrite(analogOutputPin, 72); // C3
    delay(175);
    dacWrite(analogOutputPin, 76); // D4
    delay(175);    
    dacWrite(analogOutputPin, 86); // G4
    delay(175);
    dacWrite(analogOutputPin, 82); // F4
    delay(175);
    dacWrite(analogOutputPin, 80); // E4
    delay(175);
    dacWrite(analogOutputPin, 90); // A4
    delay(175);
    dacWrite(analogOutputPin, 86); // G4
    delay(175);
    dacWrite(analogOutputPin, 82); // F4
    delay(175);
    dacWrite(analogOutputPin, 80); // E4
    delay(175);
    dacWrite(analogOutputPin, 78); // D4
    delay(175);
    dacWrite(analogOutputPin, 76); // C4
    delay(175);
    dacWrite(analogOutputPin, 78); // D4
    delay(175);
    dacWrite(analogOutputPin, 76); // C4
    delay(175);
    dacWrite(analogOutputPin, 74); // B3
    delay(175);
    Melodia(76, 150);
}

void Melodia(int nota, int tiempo){
  dacWrite(analogOutputPin, nota); // C4
  dacWrite(analogOutputPin2, 150); // 
  delay(tiempo);
  //Se aprieta la tecla con cierta nota por cierta cantidad de tiempo
  dacWrite(analogOutputPin, nota); // C4
  dacWrite(analogOutputPin2, 0); // AnalogOutputPin2 seria la entrada del ASDR
  delay(25);  
  //Se deja de apretar la tecla y el adsr entra en release
}

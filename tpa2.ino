#include "tpa2.h"


void setup() {
  Serial.begin(9600);
  RelaySetup();
  LDR_Setup();

}

void loop() {

  //sa fac o functie in care se va face tot, iar de aici doar chem functia

    Serial.println("Miscare:");
    //int value = PIR_Sensor();// eroare void value not ignored as it ought to be
    //Serial.println (value);//respectiv comendind rindul cu eroare, imi da si acesta ca eroare
    delay(200);
    
    Serial.println("Light points:");
    float l_value = LDRGetValue();
    Serial.println (l_value);
    delay(200);

    /*RelaySetValue(Relay_ON);
    Serial.println("Relay turns on");
    delay(2000);
    RelaySetValue(Relay_OFF);
    Serial.println("Relay turns off");
    delay(2000);*/

   /* int sensorValue = analogRead(A1);
    Serial.print("Analog value: ");
    Serial.println(sensorValue);
    delay(5);*/

}

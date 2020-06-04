#ifndef Sensori

#define Sensori
#define PIR_S_Mov 1
#define PIR_S_Still 0

#define PIR_PIN 3

#define Relay_MAX 1
#define Relay_MIN 0
#define Relay_ON 1
#define Relay_OFF 0

#define Relay_PIN A0

#define LDR_S 0
#define LDR_PIN A1

#define LIGHT_MIN 10
#define LIGHT_MAX 100
#define ADC_MIN 0
#define ADC_MAX 1023
#define VOLT_MIN 0
#define VOLT_MAX 5

void RelaySetup (); //initierea port (pini)
void RelaySetValue (int R_value);
int RelayGetValue (void);//evaluare valoare

void LDR_Setup(); //initierea port
float LDRGetValue ();
int LDR_Status (void);

void PIR_Setup(); //initiere port
void PIR_Sensor();

#endif

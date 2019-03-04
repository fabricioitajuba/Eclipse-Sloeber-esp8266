//Blink utilizando o sloeber do eclipse
//Eng. Fabricio de Lima Ribeiro
//04/03/2019

#include "Blink.h"

void setup()
{
	Serial.begin(115200);
	pinMode(LED_BUILTIN, OUTPUT);
	Serial.println("Configuracoes prontas...");
}


void loop()
{
	  digitalWrite(LED_BUILTIN, LOW);
	  delay(50);
	  digitalWrite(LED_BUILTIN, HIGH);
	  delay(50);
	  digitalWrite(LED_BUILTIN, LOW);
	  delay(50);
	  digitalWrite(LED_BUILTIN, HIGH);
	  delay(2000);
	  Serial.println("Teste.");
}

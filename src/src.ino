#include "P1AM.h"

void setup() 
{
  pinMode(7, OUTPUT); 
  digitalWrite(7, HIGH);

  Serial.begin(115200);
  P1.init();

  

}

void loop() 
{

  SPI.begin();
  SPI.beginTransaction(SPISettings(1000000, MSBFIRST, SPI_MODE0));
	digitalWrite(7, LOW);
  SPI.transfer('K');
	digitalWrite(7, HIGH);
	SPI.endTransaction();
	SPI.end();
    
}
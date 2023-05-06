

#include <DigitalSensor.h>


DigitalSensor pir(4);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // Check rain state every sec

  Serial.print("PIR state: ");
  if (pir.status()) {
    Serial.println("Someone detected");
  } 
  else 
  {
    Serial.println("No one detected");
  }
  

  delay(100);
}

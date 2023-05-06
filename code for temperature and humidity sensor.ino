#include<DHT.h>
#define dhttype DHT11
int sensPin=3;
DHT dht(sensPin,dhttype);
float humidity;
float tempC;
float tempF; 
int setTime=1000;

void setup() {

  Serial.begin(9600);
  dht.begin();
  delay(setTime);
  pinMode(sensPin,INPUT);
  



  // put your setup code here, to run on
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(setTime);

  humidity=dht.readHumidity();
  tempC=dht.readTemperature();
  tempF=dht.readTemperature(true);

  Serial.print(F(" Humidity(in %): "));
  Serial.println(humidity);
  Serial.print(F(" temp in C: "));
  Serial.println(tempC);
  Serial.print(F(" temp in F: "));
  Serial.println(tempF);




}

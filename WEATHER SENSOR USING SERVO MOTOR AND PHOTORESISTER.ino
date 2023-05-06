
#include<Servo.h>
int ldrpin=A0;
int servopin=9;
int ldrval;
int del=350;
int angle;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
pinMode(ldrpin,INPUT);
Serial.begin(9600);
myservo.attach(servopin);

}

void loop() {
  // put your main code here, to run repeatedly:
ldrval=analogRead(ldrpin);
Serial.println(ldrval);
delay(del);
angle=-(9./2.)*ldrval+9*(40./2.);
myservo.write(angle);


}

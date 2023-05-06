int buzzpin=13;
int del1= 200;
int del2= 300;
int j;



void setup() {
  // put your setup code here, to run once:
pinMode(buzzpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(j=1;j<=100;j=j+1){
digitalWrite(buzzpin,HIGH);
delay(del1);
digitalWrite(buzzpin,LOW);
delay(del2);

}
}
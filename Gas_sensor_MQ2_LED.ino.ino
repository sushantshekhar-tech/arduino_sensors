

int sensPin=7;
int led=13;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(sensPin,INPUT);
 pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int data=digitalRead(sensPin);

 if(data==1) 
 {
   digitalWrite(led,HIGH);
   Serial.println("gas detected");
 }
 else
 {
   digitalWrite(led,LOW);
   Serial.println("gas not detected");
 }

}


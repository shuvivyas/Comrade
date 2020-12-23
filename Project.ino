int i;
float n=0;
int led=0;
int led1=2;
int buzzer=1;
int ldr=A0;
 void setup()
{
 Serial.begin(9600);
 pinMode(led,OUTPUT);
 pinMode(led1,OUTPUT);
 pinMode(buzzer,OUTPUT);
 pinMode(ldr,INPUT);
}

void loop() 
{
 digitalWrite(led,HIGH);
 i=analogRead(A0);
 n=(5.0/1023.0)*i;
 if(n>4)
 {
  digitalWrite(led,HIGH);
  digitalWrite(led1,HIGH);
  tone(buzzer,1000);
  delay(200);
  tone(buzzer,0);
  delay(200);
 }

}

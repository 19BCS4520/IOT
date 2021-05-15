int ir1=8;
int proxy1=0;
#define NOTE_E5  659
void setup() 
{
  pinMode(ir1,INPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
}


void loop(){
  proxy1=digitalRead(ir1);

if(proxy1==LOW)
{
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW); 
  digitalWrite(7,HIGH);
  tone(7, 659,10000);
  delay(1000);
   digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  delay(10000);
  noTone(7);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  delay(10000);
}
else
{
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(1000);
}
}

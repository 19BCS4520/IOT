int ir1=8;
int proxy1=0;
#define NOTE_E5  659
void setup() 
{
  pinMode(ir1,INPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(7,OUTPUT);
}


void loop(){
  proxy1=digitalRead(ir1);

if(proxy1==LOW)
{
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  delay(10000);
  digitalWrite(7,HIGH);
  tone(7, 659,1200);
}
else
{
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(1000); 
}
}

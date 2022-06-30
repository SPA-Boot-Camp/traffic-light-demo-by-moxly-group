int led=1;
int led1=2;
int led2=4;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop()
{
  redLED();
  yellowLED();
  greenLED();
}
void redLED()
{
  digitalWrite(led,HIGH);
  delay(5000);
  digitalWrite(led, LOW);
  delay(500);
}
void yellowLED()
{
    digitalWrite(led1,HIGH);
     delay(4000);
    digitalWrite(led1, LOW);
     delay(500);
}
      
void greenLED()
{
        digitalWrite(led2,HIGH);
         delay(3000);
        digitalWrite(led2, LOW);
        delay(500);
}

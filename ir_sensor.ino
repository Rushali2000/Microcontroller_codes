void setup()
{
  pinMode(13,OUTPUT);
  pinMode(3,INPUT);
  pinMode(12,OUTPUT);
  pinMode(5,INPUT);
  Serial.begin(9600);
}
void loop()
{
  if (digitalRead(3)== LOW)
  {
    digitalWrite(13,HIGH);
    
    delay(10);
  }
  else 
  {
    
    digitalWrite(13,LOW);
    delay(10);
    
  }

  if (digitalRead(5)== LOW)
  {
    digitalWrite(12,HIGH);
    
    delay(10);
  }
  else 
  {
    
    digitalWrite(12,LOW);
    delay(10);
    
  }
  
}



void setup()
{
  Serial.begin(9600);
}

void loop()
{
  while(analogRead(A0))
  {
    Serial.println(analogRead(A0));
    analogWrite(9,analogRead(A0)/4);
  }
  
}

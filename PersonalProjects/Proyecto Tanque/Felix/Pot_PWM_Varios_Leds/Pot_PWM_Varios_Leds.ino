
void setup()
{
  Serial.begin(9600);
}

void loop()
{

  while(analogRead(A0))//Mientras exista un valor en A0
  {
    int lectura = analogRead(A0);
    Serial.println(analogRead(A0));
    
    if (lectura==0)
    {
      analogWrite(3,0);
      analogWrite(5,0);
      analogWrite(6,0);
      analogWrite(9,0);
      analogWrite(10,0);
      analogWrite(11,0);
    }
    
    if (lectura>0 && lectura<=170)
    {      
      analogWrite(3,lectura*1.5);
      analogWrite(5,0);
      analogWrite(6,0);
      analogWrite(9,0);
      analogWrite(10,0);
      analogWrite(11,0);
    }
    if (lectura>170 && lectura<=340)
    {
      analogWrite(5,(lectura-170)*1.5);
      analogWrite(6,0);
      analogWrite(9,0);
      analogWrite(10,0);
      analogWrite(11,0);
    }
    if (lectura>340 && lectura<=510)
    {
      analogWrite(6,(lectura-340)*1.5);
      analogWrite(9,0);
      analogWrite(10,0);
      analogWrite(11,0);
    }
    if (lectura>510 && lectura<=680)
    {
      analogWrite(9,(lectura-510)*1.5);
      analogWrite(10,0);
      analogWrite(11,0);
    }
    if (lectura>680 && lectura<=850)
    {
      analogWrite(10,(lectura-680)*1.5);
      analogWrite(11,0);
    }
    if (lectura>850 && lectura<=1020)
    {
      analogWrite(11,(lectura-850)*1.5);
    }
  }
  
}

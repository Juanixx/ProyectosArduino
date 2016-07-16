
void setup()

{
 pinMode(8,INPUT);          // Entrada del sensor magnetico
 pinMode(9,INPUT);          // Entrada de la Galga
 pinMode(10,INPUT);          // Entrada de la Fotoresistencia
 pinMode(11,OUTPUT);        // Estrobo
 pinMode(13,OUTPUT);          // Bocina
}

void loop()
{
  if(digitalRead(8)==HIGH || digitalRead(9)==HIGH || digitalRead(10)==HIGH)
  {
    digitalWrite(11,HIGH);
    digitalWrite(13,HIGH);
    while(1);
  }
  else
  {
    digitalWrite(11,LOW);
    digitalWrite(13,LOW);
  }
}

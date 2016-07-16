int ledPin = 13;
int inPin = 2;

void setup()
{
  pinMode(ledPin,OUTPUT);    // Configuramos el pin 13 como salida
  pinMode(inPin,INPUT);      // Configuramos el pin 2 como entrada
}

void loop()
{
  if(digitalRead(inPin)==HIGH)  // condicion (si el pin 2 esta en 5V)
  {
    digitalWrite(ledPin,HIGH);  // Ponemos el pin 13 en 5v
    delay(1000);                // Nos esperamos 1 segundo
    digitalWrite(ledPin,LOW);   // Ponemos el pin 13 en Ov
    delay(1000);
  }
  else
  {
    digitalWrite(ledPin,HIGH);  // Ponemos el pin 13 en 5v
    delay(100);                 // Nos esperamos 1 segundo
    digitalWrite(ledPin,LOW);   // Ponemos el pin 13 en Ov
    delay(100);  
  }
}


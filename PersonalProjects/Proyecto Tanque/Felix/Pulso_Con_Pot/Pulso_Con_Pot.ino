
int potPin = A0;              // Pin de entrada para el Potenciometro
int ledPin = 13;              // Pin de salida para el led

void setup()
{
  pinMode(ledPin,OUTPUT);    // declara ledPin como OUTPUT
}

void loop()
{
  digitalWrite(ledPin,HIGH);  // activa ledPin
  delay(analogRead(potPin));  // Pausa el programa
  digitalWrite(ledPin,LOW);   // desactiva el ledPin
  delay(analogRead(potPin));  // Pausa el programa
}

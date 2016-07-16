int ledPin = 9;              // Pin PWM para el led

void setup(){}

void loop()
{
  for(int i=0; i<=255; i++)  // incrementa el valor para i
  //i=0 inicializa; i<=255 es la condicion; i++ incremento
  {
    analogWrite(ledPin,i);   // asigna el nivel del brillo a i
    delay(10);               // Pausa de 10ms
  }
   for(int i=255; i>=0; i--) // decrementa el valor para i
  {
    analogWrite(ledPin,i);    // asigna el nivel del brillo a i
    delay(10);                // Pausa de 10ms
  }
}

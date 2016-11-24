int motorPin = 4; //right side to IB - forward
int motorPin2 = 7; //left side to IA - forward
int motorPin3 = 6; //right side to IA - backward
int motorPin4 = 5; //left side to IB - backward

void setup() {
  Serial.begin(9600); 
}

void loop()
{
  Adelante();
  //Atras();
  //Izquierda();
  //Derecha();
  //Detenidos();
}

void Adelante(){ 

digitalWrite(motorPin, HIGH);

digitalWrite(motorPin2, HIGH);

digitalWrite(motorPin3, LOW);  

digitalWrite(motorPin4, LOW);

 }

void Atras() {  

digitalWrite(motorPin, LOW);  

digitalWrite(motorPin2, LOW);  

digitalWrite(motorPin3, HIGH);  

digitalWrite(motorPin4, HIGH); 

} 

void Izquierda() {  

digitalWrite(motorPin, HIGH);  

digitalWrite(motorPin2, LOW);  

digitalWrite(motorPin3, HIGH);  

digitalWrite(motorPin4, LOW);

 } 

void Derecha() {  

digitalWrite(motorPin, LOW);  

digitalWrite(motorPin2, HIGH);

digitalWrite(motorPin3, LOW);  

digitalWrite(motorPin4, HIGH);

 }
 void Detenidos() {  

digitalWrite(motorPin, LOW);  

digitalWrite(motorPin2, LOW);

digitalWrite(motorPin3, LOW);  

digitalWrite(motorPin4, LOW);

 }


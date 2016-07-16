

#include <Servo.h>

#define Pecho 9
#define Ptrig 10
long duracion;  
int motorPin = 4; //right side to IB - forward

int motorPin2 = 7; //left side to IA - forward

int motorPin3 = 6; //right side to IA - backward

int motorPin4 = 5; //left side to IB - backward

int var=1;

int distancia; // variable para almacenar distancia medida del sensor
int led = 13; // led indicador pin 13

void setup() {
  Serial.begin(9600); 

  pinMode(led, OUTPUT);
  pinMode(Pecho, INPUT);     // define el pin 6 como entrada (echo)
  pinMode(Ptrig, OUTPUT);    // define el pin 7 como salida  (triger)
  pinMode(motorPin,OUTPUT);
  pinMode(motorPin2,OUTPUT);
  pinMode(motorPin3,OUTPUT);
  pinMode(motorPin4,OUTPUT);
  
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

digitalWrite(motorPin3, LOW);  

digitalWrite(motorPin4, HIGH);

 } 

void Derecha() {  

digitalWrite(motorPin, LOW);  

digitalWrite(motorPin2, HIGH);

digitalWrite(motorPin3, HIGH);  

digitalWrite(motorPin4, LOW);

 }
 void Detenidos() {  

digitalWrite(motorPin, LOW);  

digitalWrite(motorPin2, LOW);

digitalWrite(motorPin3, LOW);  

digitalWrite(motorPin4, LOW);

 }
 int Mide(){
 digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);   // genera el pulso de triger por 10ms
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29; 
  return distancia;
 }

void loop()
{
  Adelante();
  digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);   // genera el pulso de triger por 10ms
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
  Serial.print(distancia);
  Serial.println("  ");
  
  
  if (distancia < 20)
 {
      digitalWrite(led, HIGH); // indicador
      Detenidos();
      delay(500);
      Atras();
      delay(500);
      digitalWrite(led, LOW); // indicador
      
      switch(var){
      
        case 1:
        Derecha();
        delay(750);
        var=var+1;
        break;
        
        case 2:
        Derecha();
        delay(750);
        var=var+1;
        break;
        
        case 3:
        Izquierda();
        delay(750);
        var=var+1;
        break;
        
        case 4:
        Izquierda();
        delay(750);
        var=1;
        break;
      
      }
 } 
}





#include <Servo.h>

#define Pecho 9
#define Ptrig 10
long duracion;  
int motorPin = 4; //right side to IB - forward

int motorPin2 = 7; //left side to IA - forward

int motorPin3 = 6; //right side to IA - backward

int motorPin4 = 5; //left side to IB - backward

Servo torre; //servo que rota el sensor ultrasonico
int distancia; // variable para almacenar distancia medida del sensor
int Dderecha = 0; // almacena distancia derecha
int Dizquierda = 0; //almacena distancia izquierda
int led = 13; // led indicador pin 13
int contador = 0; // contador para mover la torre
int referencia = 0; // referencia para mover la torre
int torrePos = 0; // variable de posicion de torre
int contDerecha = 0; // cuenta cuando dobla a derecha
int contIzquierda = 0; // cuenta cuando dobla a izquierda

int tiempoAtras = 300; // SET TIEMPO QUE RETROCEDE
int tiempoGiro = 450; // SET TIEMPO QUE DOBLA IZQ O DER
int torreCent = 95;  // SET ANGULO INICIAL DE LA TORRE
int anguloDer = 7;    //  SET ANGULO DERECHA TORRE
int anguloIzq = 167;  //  SET ANGULO IZQUIERDA TORRE


void setup() {
  Serial.begin(9600); 
  torre.attach(8);

  pinMode(led, OUTPUT);
  pinMode(Pecho, INPUT);     // define el pin 6 como entrada (echo)
  pinMode(Ptrig, OUTPUT);    // define el pin 7 como salida  (triger)
  
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
  digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);   // genera el pulso de triger por 10ms
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
  Serial.print(distancia);
  Serial.println("  ");
  Serial.println(torrePos);
  
   if (distancia != 517) // EL SGTE. CODIGO MUEVE LA TORRE MIENTRAS AVANZA
 {
  delay(35);
 }
   if (contador < 11 && referencia == 0)
 {
   contador ++;
 }
   if (contador > 0 && referencia == 1)
 {
   contador --;
 }
   if(contador == 10)
 {
   referencia = 1;
 }    

   if(contador == 1)
 {
   referencia = 0;
 }  
     
  torrePos = map(contador, 1, 10, 41, 147); // calibra el mov.de la torre
  
  
  if (distancia < 20)
 {
      digitalWrite(led, HIGH); // indicador
      Detenidos();
      torre.write(anguloDer); // mira a la derecha
      delay(800); // espera que el servo llegue a la posicion
      Dderecha = Mide();
      Serial.print(Dderecha);
      Serial.print("cm derecha");
      Serial.println(" ");
      torre.write(anguloIzq); // mira a la izquierda
      delay(900); // espera que el servo llegue a la posicion
      Dizquierda = Mide();
      Serial.print(Dizquierda);
      Serial.print("cm izquierda");
      Serial.println(" ");
      torre.write(torreCent); // centra la torre
      Atras();
      delay(tiempoAtras); //tiempo que retrocede
      digitalWrite(led, LOW); // indicador
 } 
 
 if (Dderecha < Dizquierda) // gira a izquierda
 {
   Izquierda();
   delay(tiempoGiro);
   contIzquierda ++;
 }
 
  if (Dderecha > Dizquierda) // gira a derecha
 {
   Derecha();
   delay(tiempoGiro);
   contDerecha ++;
 }
   if (Dderecha > 500 && Dizquierda > 500) // gira a derecha si no detecta nada a los costados
 {
   Derecha();
   delay(tiempoGiro);
 }
     if (Dderecha < 33 && Dizquierda < 33 && Dderecha > Dizquierda && Dderecha != 0 && Dizquierda != 0) // gira a derecha si esta atrapado
 {
   Derecha();
   delay(1000);
 }
      if (Dderecha < 33 && Dizquierda < 33 && Dderecha < Dizquierda && Dderecha != 0 && Dizquierda != 0) // gira a izquierda si esta atrapado
 {
   Izquierda();
   delay(1000);
 }
 
   if (contDerecha == 5 && contIzquierda >= 3) // gira a derecha
 {
   Derecha();
   delay(tiempoGiro);
 }
 
  if (contIzquierda == 5 && contDerecha >= 3) // gira a izquierda
 {
   Izquierda();
   delay(tiempoGiro);
 }
 
 if(contDerecha == 5 || contIzquierda == 5)
 {
   contDerecha = 0;
   contIzquierda = 0;
 }
 
  else  // avanza 
 {
   torre.write(torrePos);
   Adelante();
 }
    Dderecha = 0;
    Dizquierda = 0;
}



#include <Servo.h>

Servo servo1; //Creación del objeto del servo

int ang=0;  //Angulo
int con=1; //Contador

/*
Sensor de proximidad y al ser inferior a 10cm 
envia un pulso de alarma por  el pin 13

 HC-SR04 conexiones:
  VCC al arduino 5v 
  GND al arduino GND
  Echo al Arduino pin 6 
  Trig al Arduino pin 7
 */
 
#define Pecho 10
#define Ptrig 9 //Numero de pin al que va conectado
long duracion, distancia;   

void setup(){
servo1.attach(8);

              
  Serial.begin (9600);       // inicializa el puerto seria a 9600 baudios
  pinMode(Pecho, INPUT);     // define el pin 6 como entrada (echo)
  pinMode(Ptrig, OUTPUT);    // define el pin 7 como salida  (triger)
  pinMode(13, 1);            // Define el pin 13 como salida
  
}

void loop(){
servo1.write(ang); //envá posicion del servomotor
ang+=con;          //Incremento de la posición
digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);   // genera el pulso de triger por 10ms
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
  
  if (distancia >= 500 || distancia <= 0){  // si la distancia es mayor a 500cm o menor a 0cm 
    Serial.println("---");                  // no mide nada
  }
  else {
    Serial.print(distancia);           // envia el valor de la distancia por el puerto serial
    Serial.println("cm");              // le coloca a la distancia los centimetros "cm"
    digitalWrite(13, 0);               // en bajo el pin 13
  }
  
if (distancia <= 10 && distancia >= 1){
    digitalWrite(13, 1);                     // en alto el pin 13 si la distancia es menor a 10cm
    Serial.println("Alarma.......");         // envia la palabra Alarma por el puerto serial
    servo1.write(servo1.read());
    delay(1000);
  }
  delay(10);                                // espera 400ms para que se logre ver la distancia en la consola
if(ang==180||ang==0){
con=con*-1;
} 
  
  
}

#include <Servo.h>

Servo servo1; //Creación del objeto del servo

int ang=0;  //Angulo
int con=1; //Contador

void setup(){
servo1.attach(9);
}

void loop(){
  for(int i=0; i<180; i++){
    servo1.write(i);
    delay(20);
    }

   for(int i=180; i>180; i--){
    servo1.write(i);
    delay(20);
    } 
/*servo1.write(ang); //envá posicion del servomotor
ang+=con;          //Incremento de la posición
delay(10);         //10 ms de pausa
if(ang<=0||ang>=180){
con=con*-1;*/
}



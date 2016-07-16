#include <Servo.h>

Servo servo1; //Creación del objeto del servo

int ang=0;  //Angulo
int con=1; //Contador

void setup(){
servo1.attach(8);
Serial.begin(9600); 
}

void loop(){
  //DE 0 a 80
  int a=analogRead(A0);
Serial.println(a);
if(a>100&&a<250){
servo1.write(80);
}
else{
servo1.write(0); //envía posicion del servomotorz
}
}




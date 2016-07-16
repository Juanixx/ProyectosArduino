int motorPin4 = 4; //Motor B

int motorPin5 = 5; //Motor B

int motorPin6 = 6; //Motor A

int motorPin7 = 7; //Motor A

void setup() {
  Serial.begin (9600);
}

void loop() {
  /*
if(analogRead(A1)>500||analogRead(A0)>500){
  while(analogRead(A1)>500){
  Izquierda();
  }
  while(analogRead(A0)>500){
  Derecha();
  }
  
}
  else{
    if(analogRead(A1)>500&&analogRead(A0)>500){
  Adelante();
    }
    else{
    Adelante();
    }
  }
*/
Atras();
    
  

}


void Atras(){ 

digitalWrite(motorPin4, HIGH);

digitalWrite(motorPin6, HIGH);

digitalWrite(motorPin5, LOW);  

digitalWrite(motorPin7, LOW);

 }

void Adelante() {  

digitalWrite(motorPin4, LOW);  

digitalWrite(motorPin7, LOW);  

digitalWrite(motorPin6, HIGH);  

digitalWrite(motorPin5, HIGH); 

} 

void Izquierda() {  

digitalWrite(motorPin4, LOW);  

digitalWrite(motorPin7, HIGH);  

digitalWrite(motorPin6, LOW);  

digitalWrite(motorPin5, HIGH);

 } 

void Derecha() {  

digitalWrite(motorPin4, HIGH);  

digitalWrite(motorPin7, LOW);  

digitalWrite(motorPin6, HIGH);  

digitalWrite(motorPin5, LOW);

 }
 void Detenidos() {  

digitalWrite(motorPin4, LOW);  

digitalWrite(motorPin7, LOW);

digitalWrite(motorPin6, LOW);  

digitalWrite(motorPin5, LOW);

 }

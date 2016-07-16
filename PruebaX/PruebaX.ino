int motorPin4 = 4; //Motor B

int motorPin5 = 5; //Motor B

int motorPin7 = 7; //Motor A

int motorPin6 = 6; //Motor A
void setup() {
  Serial.begin (9600);

}

void loop() {
  analogWrite(6,75);//6 Izquierda, 11 derecha
  analogWrite(11,75);
  
  delay(4000);
  analogWrite(6,110);
  analogWrite(11,110);
  
  delay(4000);
  analogWrite(6,160);
  analogWrite(11,160);
  
  delay(4000);
  analogWrite(6,210);
  analogWrite(11,210);
  
  delay(4000);
  analogWrite(6,255);
  analogWrite(11,255);
  
}

void Atras(){ 

digitalWrite(motorPin4, HIGH);

digitalWrite(motorPin7, HIGH);

digitalWrite(motorPin6, LOW);  

digitalWrite(motorPin5, LOW);

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

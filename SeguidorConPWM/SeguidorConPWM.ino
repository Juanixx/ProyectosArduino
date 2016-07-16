void setup() {
  Serial.begin (9600);
  pinMode(6,OUTPUT); //Motor Izquierda
  pinMode(11,OUTPUT); //Motor Derecha
}

void loop() {
  
//  Serial.print("      A0: ");
//  Serial.println(analogRead(A0));
//  
//  Serial.print("      A1: ");
//  Serial.println(analogRead(A1));
//  
//  Serial.print("      A2: ");
//  Serial.println(analogRead(A2));
//  
//  Serial.print("      A3: ");
//  Serial.println(analogRead(A3));
//  delay(1000);
  
  
  /* Prueba del seguidor
  if(analogRead(A1)<300){
  analogWrite(11,150);
  analogWrite(6,0);
  }
  else{
  if(analogRead(A2)<550){
  analogWrite(6,150);
  analogWrite(11,0);
  }
  else{
  analogWrite(6,150);
  analogWrite(11,150);
  }
}*/
  
  if(analogRead(A1)<500||analogRead(A2)<500){
  while(analogRead(A1)<500){
    analogWrite(6,0);
    analogWrite(11,65);
//  digitalWrite(motorIzq,LOW);
//  digitalWrite(motorDer,HIGH);
  }
  while(analogRead(A2)<500){
    analogWrite(6,65);
    analogWrite(11,0);
//  digitalWrite(motorIzq,HIGH);
//  digitalWrite(motorDer,LOW);
  }
  
}
  else{
    if(analogRead(A1)<500&&analogRead(A2)<500){
      analogWrite(6,65);
    analogWrite(11,65);
//  digitalWrite(motorIzq,HIGH);
//  digitalWrite(motorDer,HIGH);
    }
    else{
    analogWrite(6,65);
    analogWrite(11,65);
    }
  }
  

}

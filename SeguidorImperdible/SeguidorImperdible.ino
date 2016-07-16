void setup() {
  Serial.begin (9600);
  pinMode(6,OUTPUT); //Motor Izquierda
  pinMode(11,OUTPUT); //Motor Derecha
}

void loop() {
  if(analogRead(A0)>500){
  Dos();
  }
  else{
  while(analogRead(A2)>500){
  Derecha();
  }
  }
  if(analogRead(A3)>500){
  Dos();
  }
  else{
  while(analogRead(A1)>500){
  Izquierda();
  }
  }
}

void Dos(){
if(analogRead(A1)<500||analogRead(A2)<500){
  while(analogRead(A1)<500){
    Derecha();
  }
  while(analogRead(A2)<500){
    Izquierda();
  }
  
}
  else{
    if(analogRead(A1)<500&&analogRead(A2)<500){
      Adelante();
//  digitalWrite(motorIzq,HIGH);
//  digitalWrite(motorDer,HIGH);
    }
    else{
    Adelante();
    }
    
    }
  }
  

void Derecha(){
    analogWrite(6,0);
    analogWrite(11,60);
}

void Izquierda(){
    analogWrite(6,60);
    analogWrite(11,0);
}

void Adelante(){
    analogWrite(6,60);
    analogWrite(11,60);
}

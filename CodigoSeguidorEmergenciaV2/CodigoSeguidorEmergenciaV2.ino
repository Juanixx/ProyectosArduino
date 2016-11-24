void setup() {
  Serial.begin (9600);
  pinMode(9,OUTPUT); //Motor Izquierda
  pinMode(10,OUTPUT); //Motor Derecha
}

void loop() {
  if(analogRead(A0)<500){
    while(analogRead(A2)>500){
    Derecha();
    if(analogRead(A2)<500){
    Dos();
    }
  
}
  }
  
  if(analogRead(A3)<500){
    while(analogRead(A1)>500){
  Izquierda();
  if(analogRead(A1)<500){
  Dos();
  }
    }
  }
  if(analogRead(A1)<500||analogRead(A2)<500){
  Dos();
  }
  else{
    if(analogRead(A1)<500&&analogRead(A2)<500){
    Dos();
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
    }
    else{
    Adelante();
    }
    
    }
  }
  

void Derecha(){
    analogWrite(6,0);
    analogWrite(11,170);
}

void Izquierda(){
    analogWrite(6,170);
    analogWrite(11,0);
}

void Adelante(){
    analogWrite(6,170);
    analogWrite(11,170);
}

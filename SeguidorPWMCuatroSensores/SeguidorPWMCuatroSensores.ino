void setup() {
  Serial.begin (9600);
  pinMode(6,OUTPUT); //Motor Izquierda
  pinMode(11,OUTPUT); //Motor Derecha
}

void loop() {
  
  Cuatro();
  Dos();
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
  
  void Cuatro(){
  if(analogRead(A0)<700||analogRead(A3)<700){
  while(analogRead(A0)<700){
    Derecha();
  }
  while(analogRead(A3)<700){
    Izquierda();
  }
  
}
  else{
    if(analogRead(A0)<700&&analogRead(A3)<700){
      Adelante();
    }
    else{
    Adelante();
    }
    
    }
  }
  

void Derecha(){
    analogWrite(6,127);
    analogWrite(11,255);
}

void Izquierda(){
    analogWrite(6,255);
    analogWrite(11,127);
}

void Adelante(){
    analogWrite(6,255);
    analogWrite(11,255);
}

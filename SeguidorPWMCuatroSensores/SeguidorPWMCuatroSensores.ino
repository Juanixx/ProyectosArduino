void setup() {
  Serial.begin (9600);
  pinMode(9,OUTPUT); //Motor Izquierda
  pinMode(10,OUTPUT); //Motor Derecha
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
    analogWrite(9,0);
    analogWrite(10,127);
}

void Izquierda(){
    analogWrite(9,127);
    analogWrite(10,0);
}

void Adelante(){
    analogWrite(9,127);
    analogWrite(10,127);
}

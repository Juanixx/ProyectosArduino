void setup() {
  Serial.begin (9600);
  pinMode(6,OUTPUT); //Motor Izquierda
  pinMode(11,OUTPUT); //Motor Derecha
}

void loop() {
  
  JalaV1();
}

void JalaV2(){
if(analogRead(A1)<500||analogRead(A2)<500){
  while(analogRead(A1)<500){
  DerechaHalf();
  }
  while(analogRead(A2)<500){
  IzquierdaHalf();
  }
  
}
  else{
    if(analogRead(A1)<500&&analogRead(A2)<500){
  Adelante();
    }
  }
  
  
}


//Código funcional aunque el sensor A0 falle
void JalaV1(){
Adelante();
  if(analogRead(A1)<700){
  while(analogRead(A2)>700){
  DerechaFull();
  }
  }
  
  while(analogRead(A2)<500&&analogRead(A3)>800){
  IzquierdaFull();
  }
  if(analogRead(A3)<800){
    while(analogRead(A1)>500){
  IzquierdaHalf();
    }  }
  if(analogRead(A0)<500){
    while(analogRead(A2)>500){
  DerechaHalf();
    }
  } 
}


//Falla sensor A0
void MedioJala(){
while(analogRead(A1)<500&&analogRead(A0)>500){
  DerechaFull();
  }
  
  while(analogRead(A2)<500&&analogRead(A3)>800){
  IzquierdaFull();
  }
  if(analogRead(A3)<800){
    while(analogRead(A1)>500){
  IzquierdaHalf();
    }  }
  if(analogRead(A0)<500){
    while(analogRead(A2)>500){
  DerechaHalf();
    }
  } 
}

void DerechaFull(){
    analogWrite(6,0);
    analogWrite(11,255);
}

void IzquierdaFull(){
    analogWrite(6,255);
    analogWrite(11,0);
}

void DerechaHalf(){
    analogWrite(6,0);
    analogWrite(11,150);
}

void IzquierdaHalf(){
    analogWrite(6,150);
    analogWrite(11,0);
}

void Adelante(){
    analogWrite(6,150);
    analogWrite(11,150);
}

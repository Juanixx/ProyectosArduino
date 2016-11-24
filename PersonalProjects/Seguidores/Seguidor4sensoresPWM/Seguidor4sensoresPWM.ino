int motorIzq = 9;
int motorDer = 10;

void setup() {
  Serial.begin (9600);
  pinMode(motorIzq,OUTPUT);
  pinMode(motorDer,OUTPUT);
}

void loop() {

  if(analogRead(A0)>500||analogRead(A3)>500){
  while(analogRead(A0)>500){
  analogWrite(motorIzq,0);
  analogWrite(motorDer,200);
  }
  while(analogRead(A3)>500){
  analogWrite(motorIzq,200);
  analogWrite(motorDer,0);
  }
  
}
  else{
    if(analogRead(A0)>500&&analogRead(A3)>500){
  analogWrite(motorIzq,255);
  analogWrite(motorDer,255);
    }
  }
if(analogRead(A1)>500||analogRead(A2)>500){
  while(analogRead(A1)>500){
  analogWrite(motorIzq,0);
  analogWrite(motorDer,255);
  }
  while(analogRead(A2)>500){
  analogWrite(motorIzq,255);
  analogWrite(motorDer,0);
  }
  
}
  else{
    if(analogRead(A1)>500&&analogRead(A2)>500){
  analogWrite(motorIzq,255);
  analogWrite(motorDer,255);
    }
  }
}

int motorIzq = 9;
int motorDer = 10;

void setup() {
  Serial.begin (9600);
  pinMode(motorIzq,OUTPUT);
  pinMode(motorDer,OUTPUT);
}

void loop() {
  Serial.print("A0: ");
  Serial.println(analogRead(A0));
  Serial.print("A1: ");
  Serial.println(analogRead(A1));
if(analogRead(A1)>500||analogRead(A2)>500){
  while(analogRead(A1)>500){
  analogWrite(motorIzq,0);
  analogWrite(motorDer,200);
  }
  while(analogRead(A2)>500){
  analogWrite(motorIzq,200);
  analogWrite(motorDer,0);
  }
  
}
  else{
    if(analogRead(A1)>500&&analogRead(A2)>500){
  analogWrite(motorIzq,200);
  analogWrite(motorDer,200);
    }
  }
}

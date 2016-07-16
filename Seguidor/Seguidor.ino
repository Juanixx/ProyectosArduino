int motorIzq = 6;
int motorDer = 7;

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
if(analogRead(A1)>500||analogRead(A0)>500){
  while(analogRead(A1)>500){
  digitalWrite(motorIzq,LOW);
  digitalWrite(motorDer,HIGH);
  }
  while(analogRead(A0)>500){
  digitalWrite(motorIzq,HIGH);
  digitalWrite(motorDer,LOW);
  }
  
}
  else{
    if(analogRead(A1)>500&&analogRead(A0)>500){
  digitalWrite(motorIzq,HIGH);
  digitalWrite(motorDer,HIGH);
    }
  }
}

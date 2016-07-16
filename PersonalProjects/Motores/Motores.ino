//Para controlar los motores con el puente H L293D
//Se definen los pines de los motores

int motorA1=4;
int motorA2=5;

int motorB1=6;
int motorB2=7;

void setup(){
  Serial.begin(9600);
  pinMode(motorA1,OUTPUT);
  pinMode(motorA2,OUTPUT);
  pinMode(motorB1,OUTPUT);
  pinMode(motorB2,OUTPUT);
  
}

void loop(){

  
  digitalWrite(motorA1,LOW);
  digitalWrite(motorA2,LOW);
  
  
  digitalWrite(motorB1,LOW);
  digitalWrite(motorB2,HI);
  
  
}


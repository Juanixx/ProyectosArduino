int boton=0;
int array[]={11,10,9,6,5,3};
void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2,INPUT);
}
void loop() {
    practica();
}

void practica(){
  if(analogRead(A0)<=170.5&&analogRead(A0)>=0){
  analogWrite(11,analogRead(A0)*1.495);
  analogWrite(10,LOW);
  analogWrite(9,LOW);
  analogWrite(6,LOW);
  analogWrite(5,LOW);
  analogWrite(3,LOW);
  }
  if(analogRead(A0)<=341&&analogRead(A0)>=170.6){
  analogWrite(10,analogRead(A0)*1.495);
  analogWrite(9,LOW);
  analogWrite(6,LOW);
  analogWrite(5,LOW);
  analogWrite(3,LOW);
  }
  if(analogRead(A0)<=511.5&&analogRead(A0)>=341.1){
  analogWrite(9,analogRead(A0)*1.495);
  analogWrite(6,LOW);
  analogWrite(5,LOW);
  analogWrite(3,LOW);
  }
  if(analogRead(A0)<=682&&analogRead(A0)>=511.6){
  analogWrite(6,analogRead(A0)*1.495);
  analogWrite(5,LOW);
  analogWrite(3,LOW);
  }
  if(analogRead(A0)<=852.5&&analogRead(A0)>=682.1){
  analogWrite(5,analogRead(A0)*1.495);
  analogWrite(3,LOW);
  }
  if(analogRead(A0)<=1023&&analogRead(A0)>=852.6){
  analogWrite(3,analogRead(A0)*1.495);
  }
}

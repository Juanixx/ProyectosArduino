int boton;
int array[]={11,10,9,6,5,3};
void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13,INPUT);
}
void loop() {
  //Serial.println(analogRead(A0));
  boton=digitalRead(13);
  if(boton==HIGH){
  
    primera();
  }
  else{
    segunda();
  }
}

void primera(){
  if(analogRead(A0)<=341&&analogRead(A0)>=0){
  analogWrite(3,(analogRead(A0)*0.75)-0.25);
    analogWrite(11,(analogRead(A0)*0.75)-0.25);
    analogWrite(5,LOW);
    analogWrite(10,LOW);
  }
  if(analogRead(A0)<=682&&analogRead(A0)>=342){
    analogWrite(10,(analogRead(A0)*0.75)-0.5);
    analogWrite(5,(analogRead(A0)*0.75)-0.5);
    analogWrite(6,LOW);
    analogWrite(9,LOW);

  }
  if(analogRead(A0)<=1023&&analogRead(A0)>=683){
    analogWrite(6,(analogRead(A0)*0.75)-0.75);
  analogWrite(9,(analogRead(A0)*0.75)-0.75);
  
  }
  
}

void segunda(){
  delay(analogRead(A0));
  digitalWrite(11,HIGH);
  delay(10);
  digitalWrite(10,HIGH);
  delay(10);
  digitalWrite(9,HIGH);
  delay(10);
  digitalWrite(6,HIGH);
  delay(10);
  digitalWrite(5,HIGH);
  delay(10);
  digitalWrite(3,HIGH);
  delay(10);
  //Potenciometro
  delay(analogRead(A0));
  delay(10);
  digitalWrite(3,LOW);
  delay(10);
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(6,LOW);
  delay(10);
  digitalWrite(9,LOW);
  delay(10);
  digitalWrite(10,LOW);
  delay(10);
  digitalWrite(11,LOW);
  delay(10);
  }


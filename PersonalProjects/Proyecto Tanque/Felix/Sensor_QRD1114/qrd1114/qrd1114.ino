void setup(){

  pinMode(13,OUTPUT);
  Serial.begin(9600);
  
}

void loop(){
  
  int val = analogRead(A0);
  Serial.println(val);
  
  if(analogRead(A0)<=700){
  
  digitalWrite(13,HIGH);
  }
  else{
  digitalWrite(13,LOW);
  }
  //just to slow down the output - remove if trying to catch an object passing by
  //delay(100);

}

void setup() {
  Serial.begin(9600);

}

void loop() {
  
  
  
  Serial.print("      A0: ");
  Serial.println(analogRead(A0));
  
  Serial.print("      A1: ");
  Serial.println(analogRead(A1));
  
  Serial.print("      A2: ");
  Serial.println(analogRead(A2));
  
  Serial.print("      A3: ");
  Serial.println(analogRead(A3));
  
  delay(500);

//analogWrite(6,50);
//analogWrite(11,50);
//delay(5000);
//analogWrite(6,160);
//analogWrite(11,50);
//delay(5000);
//analogWrite(6,255);
//analogWrite(11,50);
//delay(5000);


//Acepta valores matores a 90
//analogWrite(11,180);
//analogWrite(6,180);
//  
  

}

void setup(){
  Serial.begin(9600);
}

void loop(){

  Serial.print("A.0 ");
  Serial.println(analogRead(A0));
  
  Serial.print("A.1 ");
  Serial.println(analogRead(A1));
  
  Serial.print("A.2 ");
  Serial.println(analogRead(A2));
  
  Serial.print("A.3 ");
  Serial.println(analogRead(A3));
 
  Serial.print("A.4 ");
  Serial.println(analogRead(A4));
  
  Serial.print("A.5 ");
  Serial.println(analogRead(A5));
  
  Serial.print("A.6 ");
  Serial.println(analogRead(A6));
  
  Serial.print("A.7 ");
  Serial.println(analogRead(A7));
  
  Serial.print("A.8 ");
  Serial.println(analogRead(A8));
  
  Serial.print("A.9 ");
  Serial.println(analogRead(A9));
  
  Serial.print("A.10 ");
  Serial.println(analogRead(A10));
  
  Serial.print("A.11 ");
  Serial.println(analogRead(A11));
  
  Serial.print("A.11 ");
  Serial.println(analogRead(A11));
  
  Serial.print("A.12 ");
  Serial.println(analogRead(A12));
 
  Serial.print("A.13 ");
  Serial.println(analogRead(A13));

  Serial.print("A.14 ");
  Serial.println(analogRead(A14));

  Serial.print("A.15 ");
  Serial.println(analogRead(A15)); 

  delay(1000);
}

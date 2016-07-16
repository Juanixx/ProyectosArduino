void setup() {
  Serial.begin (9600); 

}

void loop() {
  Serial.print("A0: ");
Serial.println(analogRead(A0));

Serial.print("A2: ");
Serial.println(analogRead(A2));


Serial.print("A3: ");
Serial.println(analogRead(A3));


Serial.print("A4: ");
Serial.println(analogRead(A4));
delay(2000);

}

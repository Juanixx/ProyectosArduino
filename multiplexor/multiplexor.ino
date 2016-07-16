int64_t wait=1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  digitalWrite(7, LOW);
  DDRB =0b00000111;
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  

  PORTB=0b00000000;
  uint8_t Sensor0=analogRead(A0);
  Serial.print("sensor 0 ");
  Serial.println(Sensor0);
  delay(wait);

  PORTB=0b00000001;
  uint8_t Sensor1=analogRead(A0);
  Serial.print("sensor 1 ");
  Serial.println(Sensor1);
  delay(wait);

  PORTB=0b00000010;
  uint8_t Sensor2=analogRead(A0);
  Serial.print("sensor 2 ");
  Serial.println(Sensor2);
  delay(wait);

  digitalWrite(7, HIGH);
  delay(wait);
  digitalWrite(7, LOW);
}

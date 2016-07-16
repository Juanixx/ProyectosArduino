void setup() {
Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
   for(int i=0; i<=255; i++){
   analogWrite(9,i);
   delay(10);
   }
   for(int i=0; i<=255; i--){
   analogWrite(9,i);
   delay(10);
   }
}

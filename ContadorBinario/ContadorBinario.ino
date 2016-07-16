void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}
int a=1;
void loop() {
    a++;
    digitalWrite(a,HIGH);
    delay(500);
    if(a%2==0){
    
    }
  else{
  if(a%2==0){
  
  }
  }  
}



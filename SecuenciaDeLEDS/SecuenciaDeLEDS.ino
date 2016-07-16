void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}
int a=1;
boolean x;
void loop() {
    if(a==1)
      x=true;    
      else
      if(a==9)
      x=false;
    if(x==true){
    a++;
    digitalWrite(a,HIGH);
    }
    else{
    if(x==false){
      digitalWrite(a,LOW);
    a--;
    }}
  delay(500);
}
  


int ledPin = 13;

void setup(){

 pinMode(ledPin,OUTPUT);  //configuramos el pin 13 como salida
 
}

void loop(){
 
 digitalWrite(ledPin,HIGH);  //establecimos el pin 13 como alto(5 volts)
 delay(100);
 digitalWrite(ledPin,LOW);   //establecimos el pin 13 en bajo(O volts)
 delay(100);  

}

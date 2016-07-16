/*

 HC-SR04 conexiones:
  VCC al arduino 5v 
  GND al arduino GND
  Echo al Arduino pin 6 
  Trig al Arduino pin 7
 */
 
#define Pecho 10
#define Ptrig 9 //Numero de pin al que va conectado
long duracion, distancia;   

void setup(){
  Serial.begin (9600);       // inicializa el puerto seria a 9600 baudios
  pinMode(Pecho, INPUT);     // define el pin 6 como entrada (echo)
  pinMode(Ptrig, OUTPUT);    // define el pin 7 como salida  (triger)  
}

void loop(){
digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);   // genera el pulso de triger por 10ms
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
  
  if(distancia<=20){
  Adelante();
  }
  else{
  Derecha();
  }
  
  
  
}

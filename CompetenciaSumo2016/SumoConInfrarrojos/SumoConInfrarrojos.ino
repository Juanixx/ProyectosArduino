//-----------------> SUMO <-----------------

#define Pecho 10
#define Ptrig 9 //Numero de pin al que va conectado

long duracion, duracion2, distancia,distancia2;   

int motorPin5 = 5; //Motor esquina izquierda superior 
int motorPin3 = 3; //Motor esquina derecha superior 
int motorPin6 = 6; //Motor esquina izquierda inferior
int motorPin4 = 4; //Motor esquina derecha inferior

void setup()
{
  Serial.begin (9600);       // inicializa el puerto seria a 9600 baudios
  //SENSORES ULTRASONICOS DELANTERO
  pinMode(Pecho, INPUT);     // define el pin 6 como entrada (echo)
  pinMode(Ptrig, OUTPUT);    // define el pin 7 como salida  (triger)
  pinMode(13, 1);            // Define el pin 13 como salida  
  
  
  //MOTORES
  pinMode (motorPin5, OUTPUT);
  pinMode (motorPin3, OUTPUT);
  pinMode (motorPin6, OUTPUT);
  pinMode (motorPin4, OUTPUT);
  //delay(5000);

}

void loop()
{
  digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);   // genera el pulso de triger por 10ms
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
  
Serial.print("A0: ");
Serial.println(analogRead(A0));

Serial.print("A2: ");
Serial.println(analogRead(A2));


Serial.print("A3: ");
Serial.println(analogRead(A3));


Serial.print("A4: ");
Serial.println(analogRead(A4));
if(analogRead(A0)<300&&analogRead(A2)<300){
Atras();
delay(7000);
}

if(analogRead(A3)<300&&analogRead(A4)<300){
Adelante();
delay(7000);
}
if(analogRead(A0)<300){
Atras();
delay(7000);
}
if(analogRead(A2)<300){
Atras();
delay(7000);
}
if(analogRead(A3)<300){
Adelante();
delay(7000);
}
if(analogRead(A4)<300){
Adelante();
delay(7000);
}

if (distancia <= 45){
    Adelante();
    
  }
  else{
  Derecha();  
  }  
   
}

//---------------MOVIMIENTOS--------------
void Atras(){ 

  digitalWrite(motorPin5, HIGH);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin6, LOW);  
  digitalWrite(motorPin4, LOW);

}

void Adelante() {  

  digitalWrite(motorPin5, LOW);  
  digitalWrite(motorPin3, LOW);  
  digitalWrite(motorPin6, HIGH);  
  digitalWrite(motorPin4, HIGH); 

} 

void Derecha() {  

  digitalWrite(motorPin3, HIGH);  
  digitalWrite(motorPin5, LOW);  
  digitalWrite(motorPin4, LOW);  
  digitalWrite(motorPin6, HIGH);

} 

void Izquierda() {  

  digitalWrite(motorPin3, LOW);  
  digitalWrite(motorPin5, HIGH);
  digitalWrite(motorPin4, HIGH);  
  digitalWrite(motorPin6, LOW);

}

//---------------FIN MOVIMIENTOS--------------

//---------------SENSORES ULTRASONICOS--------


//-----------FIN SENSORES ULTRASONICOS--------

//---------------SENSORES INFRARROJOS---------
void sensorInfraFrontal(){
//  Serial.println("Sensor frontal derecho");
  Serial.println(analogRead(A0)); // envía valor analógico
  delay(100);     // espera 1 segundo
  /*
  Serial.println("Sensor frontal izquierdo");
  Serial.println(analogRead(A1)); // envía valor analógico
  delay(1000);     // espera 1 segundo
  
  Serial.println("Sensor tracero derecho");
  Serial.println(analogRead(A2)); // envía valor analógico
  delay(1000);     // espera 1 segundo
  
  Serial.println("Sensor tracero izquierdo");
  Serial.println(analogRead(A3)); // envía valor analógico
  delay(1000);     // espera 1 segundo
  */
}
//-----------FIN SENSORES INFRARROJOS---------void setup() {
  // put your setup code here, to run once:



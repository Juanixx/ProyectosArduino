//-----------------> SUMO <-----------------

#define Pecho 10
#define Ptrig 9 //Numero de pin al que va conectado

#define Pecho2 11
#define Ptrig2 12 //Numero de pin al que va conectado

long duracion, duracion2, distancia,distancia2;   

int motorPin5 = 5; //Motor esquina izquierda superior 
int motorPin3 = 3; //Motor esquina derecha superior 
int motorPin6 = 6; //Motor esquina izquierda inferior
int motorPin4 = 4; //Motor esquina derecha inferior

int a=0;
void setup()
{
  Serial.begin (9600);       // inicializa el puerto seria a 9600 baudios
  //SENSORES ULTRASONICOS DELANTERO
  pinMode(Pecho, INPUT);     // define el pin 6 como entrada (echo)
  pinMode(Ptrig, OUTPUT);    // define el pin 7 como salida  (triger)
  pinMode(13, 1);            // Define el pin 13 como salida  
  
  pinMode(Pecho2, INPUT);     // define el pin 6 como entrada (echo)
  pinMode(Ptrig2, OUTPUT);    // define el pin 7 como salida  (triger)
  
  //MOTORES
  pinMode (motorPin5, OUTPUT);
  pinMode (motorPin3, OUTPUT);
  pinMode (motorPin6, OUTPUT);
  pinMode (motorPin4, OUTPUT);
  delay(5000);

  
}

void loop()
{
  if(a==0){
  digitalWrite(motorPin3, LOW);  
  digitalWrite(motorPin5, LOW);  
  digitalWrite(motorPin4, LOW);  
  digitalWrite(motorPin6, LOW);
  a=a+1;
  }
  
  digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);   // genera el pulso de triger por 10ms
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
  
if (distancia < 50){
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

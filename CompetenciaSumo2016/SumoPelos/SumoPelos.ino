#define PechoF 9 //Para sensor de enfrente
#define PtrigF 10 //Para sensor de enfrente

#define PechoB 7 //Para sensor de atras
#define PtrigB 8 //Para sensor de atras

long duracion;  
int distancia; // variable para almacenar distancia medida del sensor


int motorPin5 = 7; //Motor esquina izquierda superior 

int motorPin3 = 6; //Motor esquina derecha superior 

int motorPin6 = 5; //Motor esquina izquierda inferior

int motorPin4 = 4; //Motor esquina derecha inferior
int DistanciaF;
int DistanciaB;


void setup() {
  Serial.begin (9600);
  pinMode (motorPin5, OUTPUT);
  pinMode (motorPin3, OUTPUT);
  pinMode (motorPin6, OUTPUT);
  pinMode (motorPin4, OUTPUT);
  pinMode(PechoF, INPUT);
  pinMode(PtrigF, OUTPUT);    
  pinMode(PechoB, INPUT);     
  pinMode(PtrigB, OUTPUT);    
  delay(5000);
}





void loop() {
  Derecha();
}








int Mide(int Ptrig, int Pecho){
 digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);   // genera el pulso de triger por 10ms
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29; 
  return distancia;
 }

void Adelante(){ 

digitalWrite(motorPin5, HIGH);

digitalWrite(motorPin3, HIGH);

digitalWrite(motorPin6, LOW);  

digitalWrite(motorPin4, LOW);

 }

void Atras() {  

digitalWrite(motorPin5, LOW);  

digitalWrite(motorPin3, LOW);  

digitalWrite(motorPin6, HIGH);  

digitalWrite(motorPin4, HIGH); 

} 

void Izquierda() {  

digitalWrite(motorPin3, HIGH);  

digitalWrite(motorPin5, LOW);  

digitalWrite(motorPin4, LOW);  

digitalWrite(motorPin6, HIGH);

 } 

void Derecha() {  

digitalWrite(motorPin3, LOW);  

digitalWrite(motorPin5, HIGH);

digitalWrite(motorPin4, HIGH);  

digitalWrite(motorPin6, LOW);

 }
 void Detenidos() {  

digitalWrite(motorPin3, LOW);  

digitalWrite(motorPin5, LOW);

digitalWrite(motorPin4, LOW);  

digitalWrite(motorPin6, LOW);
 }

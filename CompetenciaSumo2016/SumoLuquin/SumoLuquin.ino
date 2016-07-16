#define Pecho 8 //Para sensor de enfrente
#define Ptrig 9 //Para sensor de enfrente
long duracion;  
int distancia; // variable para almacenar distancia medida del sensor


int motorPin4 = 4; //Motor esquina izquierda superior 

int motorPin3 = 5; //Motor esquina izquierda inferior

int motorPin5 = 3; //Motor esquina derecha superior 

int motorPin2 = 2; //Motor esquina derecha inferior

void setup() {
  Serial.begin (9600);
  pinMode (motorPin4, OUTPUT);
  pinMode (motorPin3, OUTPUT);
  pinMode (motorPin5, OUTPUT);
  pinMode (motorPin2, OUTPUT);    
  pinMode(Pecho, INPUT);     
  pinMode(Ptrig, OUTPUT);    
  delay(5000);
}





void loop() {
  digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);   // genera el pulso de triger por 10ms
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29; 
  
  if(distancia<45){
    Adelante();
    }
    else{
      Derecha();
      }
  
}





 

void Adelante(){ 

digitalWrite(motorPin5, LOW);  //Motor derecho para atras

digitalWrite(motorPin4, HIGH); //Motor izquierda para adelante

digitalWrite(motorPin2, HIGH);  //Motor derecho para adelante

digitalWrite(motorPin3, LOW); //Motor izquierda para atras

 }


void Derecha() {  

digitalWrite(motorPin5, HIGH);  

digitalWrite(motorPin4, HIGH);

digitalWrite(motorPin2, LOW);  

digitalWrite(motorPin3, LOW);

 }

//void Izquierda() {  
//
//digitalWrite(motorPin3, HIGH);  
//
//digitalWrite(motorPin5, LOW);  
//
//digitalWrite(motorPin4, LOW);  
//
//digitalWrite(motorPin6, HIGH);
//
// } 



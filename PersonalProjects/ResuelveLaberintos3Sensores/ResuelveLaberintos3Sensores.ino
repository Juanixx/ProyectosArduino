//Sensor izquierda
#define PechoIzq 2
#define PtrigIzq 3

//Sensor del frente
#define PechoFrente 4
#define PtrigFrente 5

//Sensor derecha
#define PechoDer 6
#define PtrigDer 7

long duracion, distancia, distanciaDer, distanciaFrente,distanciaIzq;   


int motorPin = 8; //right side to IB   ----------Derecha
int motorPin3 = 10; //left side to IA  ----------Izquierda
int motorPin2 = 11; //right side to IA ----------Izquierda
int motorPin4 = 9; //left side to IB   ----------Derecha

void setup() {                
  Serial.begin (9600);       // inicializa el puerto serial a 9600 baudios
  pinMode(PechoIzq, INPUT);    
  pinMode(PtrigIzq, OUTPUT);  

  pinMode(PechoFrente, INPUT);    
  pinMode(PtrigFrente, OUTPUT);    

  pinMode(PechoDer, INPUT);    
  pinMode(PtrigDer, OUTPUT);    
  }
  
void loop() {

  //Sensor derecho no funciona

  
  distanciaFrente=mide();

  if(distanciaFrente>8){
    Adelante();
    }
    else{
      Derecha();
      delay(600);
      Detenidos();
      distanciaDer=mide();
      Izquierda();
      delay(1200);
      distanciaIzq=mide();
      Derecha();
      delay(600);

      if(distanciaDer>distanciaIzq){
    Derecha();
    delay(600);
    }
    if(distanciaDer<distanciaIzq){
      Izquierda();
      delay(600);
      }
      }
  
}

long sensorIzquierda(){
  digitalWrite(PtrigIzq, LOW);
  delayMicroseconds(2);
  digitalWrite(PtrigIzq, HIGH);  
  delayMicroseconds(10);
  digitalWrite(PtrigIzq, LOW);
  
  
  //Primer Sensor
  duracion = pulseIn(PechoIzq, HIGH);
  distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
  return distancia;
  }

  long sensorFrente(){
  digitalWrite(PtrigFrente, LOW);
  delayMicroseconds(2);
  digitalWrite(PtrigFrente, HIGH);  
  delayMicroseconds(10);
  digitalWrite(PtrigFrente, LOW);
  
  
  //Primer Sensor
  duracion = pulseIn(PechoFrente, HIGH);
  distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
  return distancia;
  }

  long sensorDerecha(){
  digitalWrite(PtrigFrente, LOW);
  delayMicroseconds(2);
  digitalWrite(PtrigFrente, HIGH);  
  delayMicroseconds(10);
  digitalWrite(PtrigFrente, LOW);
  //Primer Sensor
  duracion = pulseIn(PechoFrente, HIGH);
  distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
  return distancia;
  }

  void Atras(){ 

digitalWrite(motorPin, HIGH);

digitalWrite(motorPin2, HIGH);

digitalWrite(motorPin3, LOW);  

digitalWrite(motorPin4, LOW);

 }

void Adelante() {  

digitalWrite(motorPin, LOW);  

digitalWrite(motorPin2, LOW);  

digitalWrite(motorPin3, HIGH);  

digitalWrite(motorPin4, HIGH); 

} 

void Derecha() {  

digitalWrite(motorPin, HIGH);  

digitalWrite(motorPin2, LOW);  

digitalWrite(motorPin3, HIGH);  

digitalWrite(motorPin4, LOW);

 } 

void Izquierda() {  

digitalWrite(motorPin, LOW);  

digitalWrite(motorPin2, HIGH);

digitalWrite(motorPin3, LOW);  

digitalWrite(motorPin4, HIGH);

 }
 void Detenidos() {  

digitalWrite(motorPin, LOW);  

digitalWrite(motorPin2, LOW);

digitalWrite(motorPin3, LOW);  

digitalWrite(motorPin4, LOW);

 }


long mide(){
  digitalWrite(PtrigFrente, LOW);
  delayMicroseconds(2);
  digitalWrite(PtrigFrente, HIGH);  
  delayMicroseconds(10);
  digitalWrite(PtrigFrente, LOW);

  duracion = pulseIn(PechoFrente, HIGH);
  distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
  return distancia;
  }

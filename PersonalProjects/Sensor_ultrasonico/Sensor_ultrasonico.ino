#define Pecho 9
#define Ptrig 8

long duracion, distancia;   
 
void setup() {                
  Serial.begin (9600);       // inicializa el puerto seria a 9600 baudios
  pinMode(Pecho, INPUT);    
  pinMode(Ptrig, OUTPUT);    
  }
  
void loop() {
  
  digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);  
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  
  //Primer Sensor
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
  Serial.println(distancia);
}

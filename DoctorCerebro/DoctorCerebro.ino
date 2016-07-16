//-----------------> SUMO <-----------------

//Sensor ultrasonico delantero
#define mach 10000
int trig1=9;
int echo1=10;
long temp1=0;
int dist1=0;
int dista=0;

//Sensor ultrasonico tracero
#define mach2 10000
int trig2=11;
int echo2=12;
long temp2=0;
int dist2=0;
int dista2=0;

int motorR1 = 3; //motor derecho 
int motorR2 = 4; //motor derecho
int motorL1 = 5; //motor izquierdo
int motorL2 = 6; //motor izquierdo

void setup()
{
  Serial.begin (9600);       // inicializa el puerto seria a 9600 baudios
  //SENSORES ULTRASONICOS DELANTERO
  pinMode(trig1,OUTPUT);
  pinMode(echo1,INPUT);
  pinMode(13, 1);            // Define el pin 13 como salida
  
  //SENSORES ULTRASONICOS TRACERO
  pinMode(trig2,OUTPUT);
  pinMode(echo2,INPUT);
  pinMode(13, 1);            // Define el pin 13 como salida
  
  //MOTORES
  pinMode (motorR1, OUTPUT);
  pinMode (motorR2, OUTPUT);
  pinMode (motorL1, OUTPUT);
  pinMode (motorL1, OUTPUT);

//-------> Debe haber un delay de 5 seg antes de que empiece ha hacer algun movimiento, reglamento <-------
  //delay(5000);

}

void loop()
{
  //FUNCIONES BASICAS
  int sensorFrente=UltraF();
  int sensorTrasero=UltraT();
  
  while(sensorFrente<45){
    motoIzqF();
    motoDerF();

  }
  while(sensorTrasero<45){
    sensoresDeLinea();
    motoIzqR();
    motoDerR();

  }
  while(sensorFrente>45&&sensorTrasero>45){\
     sensoresDeLinea();
     motoIzqF();
    motoDerR();

  }
  
  
  
  //FUNCIONES BASICAS FIN
  
  //Funciones con sensores infrarrojos
  /*Modificaciones*/
  
  //Fin funciones con sensores infrarrojos
  
  //Variables para pasar los valores obtenidos del sensor infrarrojos
  //float valorSensFder, valorSensFizq, valorSensTder, valorSensTizq; 
  
  //Los sensores infrarrojos los leemos desde pines analogicos
  //valorSensFder=analogRead(AO);
  //valorSensTder=analogRead(A2); 
  //valorSensTizq=analogRead(A3);
 
// Serial.println(sensorUltraFrontal());
//sensorInfraFrontal();
}

//---------------MOVIMIENTOS--------------
void motoIzqF(){
  digitalWrite (motorL1, true); 
  digitalWrite (motorL2, false);
}

void sensoresDeLinea(){
int A0, A1, A2, A3;
  if( A0 < 28){
    //Atras
    motoIzqR();
    motoDerR(); 
  }
  
   if(A1 < 28){
    //Atras
    motoIzqR();
    motoDerR(); 
  }
  
   if(A2 < 28){
    //Adelante
    motoIzqF();
    motoDerF();
  }
  
   if(A3 < 28){
    //Adelante
    motoIzqF();
    motoDerF();
  }
}

void motoIzqR(){
  digitalWrite (motorL1, false); 
  digitalWrite (motorL2, true);
}
void motoDerF(){
  digitalWrite (motorR1, false); 
  digitalWrite (motorR2, true);
}
void motoDerR(){
  digitalWrite (motorR1, true); 
  digitalWrite (motorR2, false);
}


void detenido(){
  digitalWrite(motorR1,LOW);
  digitalWrite(motorR2,LOW);
  digitalWrite(motorL1,LOW);
  digitalWrite(motorL2,LOW);
}
//---------------FIN MOVIMIENTOS--------------

//---------------SENSORES ULTRASONICOS--------
int UltraF(){
  digitalWrite(trig1,false); // Por cuestión de estabilización del sensor
  delayMicroseconds(2);
  digitalWrite(trig1,true); // envío del pulso ultrasónico
  delayMicroseconds(10);
  digitalWrite(trig1,false);
  temp1=pulseIn(echo1,true,mach); 
  //dist1= int(0.017*temp1); //fórmula para calcular la distancia obteniendo un valor entero
  dist1 = (temp1/2) / 29.1;
  if(dist1!=0&&dist1<101){
    dista = (dista+dist1)/2;  
  }else{
    dista=101;
  }
  return dista;
  Serial.println(dista);
  
}

int UltraT(){
  digitalWrite(trig2,false); // Por cuestión de estabilización del sensor
  delayMicroseconds(2);
  digitalWrite(trig2,true); // envío del pulso ultrasónico
  delayMicroseconds(10);
  digitalWrite(trig2,false);
  temp2=pulseIn(echo2,true,mach2); 
  //dist1= int(0.017*temp1); //fórmula para calcular la distancia obteniendo un valor entero
  dist2 = (temp2/2) / 29.1;
  if(dist2!=0&&dist2<101){
    dista2 = (dista2+dist2)/2;  
  }else{
    dista2=101;
  }
  return (dista2);
  Serial.println(dista);
}
//-----------FIN SENSORES ULTRASONICOS--------

int SFR(){
  return (analogRead(A0));
}

int SFL(){
  return (analogRead(A1));
}

int SRR(){
  return (analogRead(A2));
}

int SRL(){
  return (analogRead(A3));
}

//---------------SENSORES INFRARROJOS---------
void sensorInfraFrontal(){
//  Serial.println("Sensor frontal derecho");
  Serial.println(analogRead(A3)); // envía valor analógico
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
//-----------FIN SENSORES INFRARROJOS---------

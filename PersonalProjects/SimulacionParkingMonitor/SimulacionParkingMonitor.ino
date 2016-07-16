int randNumber;
int a=0;
void setup(){
  Serial.begin(9600);
}

void loop(){
  randomSeed(millis());    // genera una semilla para aleatorio a partir de la función millis()
randNumber = random(1000);    // genera número aleatorio entre 0 y 255

if(a==0){
  Serial.print("A.0 ");
  Serial.println("600");
  
  Serial.print("A.1 ");
  Serial.println("300");
  
  Serial.print("A.2 ");
  Serial.println("600");
  
  Serial.print("A.3 ");
  Serial.println("300");
 
  Serial.print("A.4 ");
  Serial.println("600");
  
  Serial.print("A.5 ");
  Serial.println("300");
  
  Serial.print("A.6 ");
  Serial.println("600");
  
  Serial.print("A.7 ");
  Serial.println("300");
  
  Serial.print("A.8 ");
  Serial.println("600");
  
  Serial.print("A.9 ");
  Serial.println("300");
  
  Serial.print("A.10 ");
  Serial.println("600");
  
  Serial.print("A.11 ");
  Serial.println("300");

//Desde aquí se empieza a modificar
  Serial.print("A.12 ");
  Serial.println("600");
  
  Serial.print("A.13 ");
  Serial.println("300");

  
  
  a++;  
}

else{
  Serial.print("A.0 ");
  Serial.println("300");
  
  Serial.print("A.1 ");
  Serial.println("600");
  
  Serial.print("A.2 ");
  Serial.println("300");
  
  Serial.print("A.3 ");
  Serial.println("600");
 
  Serial.print("A.4 ");
  Serial.println("300");
  
  Serial.print("A.5 ");
  Serial.println("600");
  
  Serial.print("A.6 ");
  Serial.println("300");
  
  Serial.print("A.7 ");
  Serial.println("600");
  
  Serial.print("A.8 ");
  Serial.println("300");
  
  Serial.print("A.9 ");
  Serial.println("600");
  
  Serial.print("A.10 ");
  Serial.println("300");
  
  Serial.print("A.11 ");
  Serial.println("600");

  Serial.print("A.12 ");
  Serial.println("300");
  
  Serial.print("A.13 ");
  Serial.println("600");

  a--;
} 
 
 delay(2000);
}

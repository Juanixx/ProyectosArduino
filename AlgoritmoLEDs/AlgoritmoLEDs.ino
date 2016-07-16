void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  
  pinMode(13,OUTPUT); //Pin para pruebas
}
int a=1,cont=0, var=0,b=0,b2=1,esp=1;
boolean x;
void loop() {
    //SecuenciaV2();
    //primera();
    //segunda();
    //prueba();
    //contadorbinario();
    //tiraDeLEDS();
    binarioDe4();
    
    
}

void primera(){
if(a==1)
      x=true;    
      else
      if(a==9)
      x=false;
    if(x==true){
    a++;
    digitalWrite(a,HIGH);
    }
    else{
    if(x==false){
      digitalWrite(a,LOW);
    a--;
    }}
  delay(500);
}
void Secuencia(){
  if(a==1)
      x=true;    
      else
      if(a==9)
      x=false;
    if(x==true){
      a++;
      if(a%2==0){
      delay(500);
      digitalWrite(a,HIGH);
  }
    }
    else{
    if(x==false){
      if(a%2!=0){
      delay(500);
      digitalWrite(a,HIGH);      
  }
  a--;
    }}
  delay(500);
}

void SecuenciaV2(){
  if(a==1)
      x=true;    
      else
      if(a==9)
      x=false;
    if(x==true){
      a++;
      if(a%2==0){
        
      delay(500);
      digitalWrite(a,HIGH);
  }
    }
    else{
    if(x==false){
      if(a%2!=0){
        var++;
      delay(500);
      digitalWrite(a,HIGH);
  }
  a--;
    } 
}
  delay(500);
  if(var==4){
    var=0;
    for(;;){
  apaga();
  if(var==4)
    break;
    }
    var=0;
    b=0;
  }
}

void apaga(){
if(a==1)
      x=true;    
      else
      if(a==9)
      x=false;
    if(x==true){
      a++;
      if(a%2==0){
      delay(500);
      digitalWrite(a,LOW);
  }
    }
    else{
    if(x==false){
      if(a%2!=0){
        var++;
      delay(500);
      digitalWrite(a,LOW);      
  }
  a--;
    }}
  delay(500);

}

void segunda(){
  a++;
  cont++;
  digitalWrite(a,HIGH);
  delay(500);
  if(a>3&&a<9){
    int c=a-2;
  digitalWrite(c,LOW);
  }
}

void prueba(){
digitalWrite(13,HIGH);
Serial.println(A0);
delay(analogRead(A0));
digitalWrite(13,LOW);
Serial.println(A0);
delay(analogRead(A0));
}


//Práctica 3
void contadorbinario(){
  if(b==15){
  esp=1;
  }
  b=b/2;
  if(b%2!=0){
  digitalWrite(a,HIGH);
  delay(500);
  }
  if(b!=0){
  a++;
  }
  if(b==0){
  digitalWrite(a++,HIGH);
  delay(500);
  for(int i=0;i<=esp;i++){
  digitalWrite(i,LOW);
  }
  a=1;
  esp++;
  b=esp;
  }
  delay(500);
}

//Pines 3, 5, 6, 9, 10, 11
void tiraDeLEDS(){
  int i;
   if(cont<7){
   next(cont++);
   i=1;
   while(i<=255){
   analogWrite(a,i);
   delay(10);
   i++;
   }
   }
   else{
   back(cont++);
   i=255;
   while(i>=0){
   analogWrite(a,i);
   delay(10);
   i--;
   }
   }
}


void next(int x){
  if(x==1){
  a=3;
  }
  
if(x==2){
a=5;
}
if(x==3){
a=6;
}
if(x==4){
a=9;
}
if(x==5){
a=10;
}
if(x==6){
a=11;
}
}

void back(int x){
  if(x==7){
a=11;
}
if(x==8){
a=10;
}
if(x==9){
a=9;
}
if(x==10){
a=6;
}
if(x==11){
a=5;
}
  if(x==12){
  a=3;
  cont=0;
  }
  }


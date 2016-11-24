#include <SoftwareSerial.h>
SoftwareSerial mySerial(4, 2); // RX, TX
int led=0;
void setup()
{
// Open serial communications and wait for port to open:
Serial.begin(9600);

Serial.println("Conectado al Bluetooth!");
// set the data rate for the SoftwareSerial port
mySerial.begin(9600);
mySerial.println("Conectado a la pc");
pinMode(13,OUTPUT); //Pin para pruebas

}
void loop() // run over and over
{
  if(led==1)
    digitalWrite(13,HIGH);
    else{
      if(led==0)
    digitalWrite(13,LOW);
    }
if (mySerial.available()){
//Aquí se reciben los datos del teléfono
//Serial.write(mySerial.read());
char C=mySerial.read();
if(C=='A'){
led=1;
}
else{
  if(C=='a'){
led=0;
}
else{
  Serial.println("No entra pero si lee");
  }

}
}

if (Serial.available())
//Aquí se envían los datos al celular
mySerial.write(Serial.read());
}

String GetLine()
   {   String S = "" ;
       if (mySerial.available())
          {    char c = mySerial.read(); ;
                while ( c != '\n')            //Hasta que el caracter sea intro
                  {     S = S + c ;
                        delay(25) ;
                        c = mySerial.read();
                  }
                return( S ) ;
          }
   }

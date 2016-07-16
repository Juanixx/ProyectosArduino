  #include <Servo.h>  
   
Servo servo1;  // Crea un Objeto servo  
int posicion;    // Variable de la posicion del servo  
   
void setup()  
{  
  Serial.begin(9600);
  servo1.attach(9);  // Selecionamos el pin 9 como el pin de control para els ervo  
}  
	   
	void loop()  
	{  
	  
        //  Serial.println(A0);
	//  posicion = analogRead(A0);            // Establecemos el valor de la posicion a 150º  
//	  posicion = map(posicion, 0, 1023, 0, 179);     // Establecemos la relacion entre los grados de giro y el PWM  
	  /* Con el mapa de valores anterior establecemos una relacin proporcional */  
	  /* entre el pulso minimo 0 con el grado minimo, 0 tambien y el pulso maximo*/  
	  /* 1023 con el grado maximo, 179*/  
	 // servo1.write(90);                  // Escribimos la posicion con el mapa de valores al servo  
	  //delay(150);                           // Y le damos un tiempo para que sea capaz de moverse  
          delay(1000);
          servo1.write(150);
          delay(1000);
	}


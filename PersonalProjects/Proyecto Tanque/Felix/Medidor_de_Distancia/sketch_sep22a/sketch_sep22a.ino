void setup() {

  pinMode (2,OUTPUT);//attach pin 2 to vcc
  pinMode (5,OUTPUT);//attach pin 5 to GND

  Serial.begin(9600);
}

void loop()
{

  digitalWrite(2, HIGH);

  long duration, cm;

  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);
  delayMicroseconds(2);
  digitalWrite(3, HIGH);
  delayMicroseconds(5);
  digitalWrite(3, LOW);

  pinMode (4, INPUT);
  duration = pulseIn(4, HIGH);

    cm = duration/29/2;
 
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
 
  delay(100);
}


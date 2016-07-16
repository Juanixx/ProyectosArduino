void setup() {
  Serial.begin(9600);

}

void loop() {
  int array[]={11,10,9,6,5,3};
  for (int i=0;i<6; i++){
  Serial.println(array[i]);
  }

}

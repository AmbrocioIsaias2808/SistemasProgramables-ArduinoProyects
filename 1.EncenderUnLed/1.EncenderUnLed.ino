void setup() {
 pinMode (13,OUTPUT); //El pin 10 se usara como salida

}

void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}

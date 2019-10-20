int led = 2;
int btn=8;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);
}

void loop() {
  int state= digitalRead(btn);
  Serial.println(state);
  if(state==HIGH){
    digitalWrite(led,HIGH);
    }
  else{
    digitalWrite(led,LOW);    
  }
  

}

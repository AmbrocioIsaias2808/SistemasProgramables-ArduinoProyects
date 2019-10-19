


int ledVerde1 = 10;
int ledAmarillo1= 9;
int ledRojo1= 8;

int ledVerde2= 7;
int ledAmarillo2= 6;
int ledRojo2= 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledVerde1,OUTPUT);
  pinMode(ledVerde2,OUTPUT);
  pinMode(ledAmarillo1,OUTPUT);
  pinMode(ledAmarillo2,OUTPUT);
  pinMode(ledRojo1,OUTPUT);
  pinMode(ledRojo2,OUTPUT);
  
}

void loop() {
/*  delay(1000);
  digitalWrite(ledVerde1, HIGH);
  digitalWrite(ledRojo2, HIGH); 
  delay(2000); 
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledRojo2, LOW);
  delay(1000);
  digitalWrite(ledAmarillo1, HIGH);
  digitalWrite(ledAmarillo2, HIGH); 
  delay(1000);
  digitalWrite(ledAmarillo1, LOW);
  digitalWrite(ledAmarillo2, LOW); 
  delay(1000);
  digitalWrite(ledVerde2, HIGH);
  digitalWrite(ledRojo1, HIGH); 
  delay(1000);
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledRojo1, LOW); 
*/
  digitalWrite(ledVerde1, HIGH);
  digitalWrite(ledRojo2, HIGH);
  delay(1000);
  digitalWrite(ledVerde1,LOW);
  delay(500);
  digitalWrite(ledVerde1,HIGH);
  delay(500);
  digitalWrite(ledVerde1,LOW);
  delay(500);
  digitalWrite(ledVerde1,HIGH);
  delay(500);
  digitalWrite(ledVerde1,LOW);
  delay(500);
  digitalWrite(ledVerde1,HIGH);
  delay(500);
  digitalWrite(ledVerde1,LOW);
  delay(500);
  digitalWrite(ledAmarillo1,HIGH);
  delay(1000);
  digitalWrite(ledAmarillo1,LOW);
  digitalWrite(ledRojo2,LOW);
  digitalWrite(ledVerde2,HIGH);
  digitalWrite(ledRojo1,HIGH);
  delay(2000);
  digitalWrite(ledVerde2, HIGH);
  digitalWrite(ledRojo1, HIGH);
  delay(1000);
  digitalWrite(ledVerde2,LOW);
  delay(500);
  digitalWrite(ledVerde2,HIGH);
  delay(500);
  digitalWrite(ledVerde2,LOW);
  delay(500);
  digitalWrite(ledVerde2,HIGH);
  delay(500);
  digitalWrite(ledVerde2,LOW);
  delay(500);
  digitalWrite(ledVerde2,HIGH);
  delay(500);
  digitalWrite(ledVerde2,LOW);
  delay(500);
  digitalWrite(ledAmarillo2,HIGH);
  delay(1000);
  digitalWrite(ledAmarillo2,LOW);
  digitalWrite(ledRojo1,LOW);
  digitalWrite(ledVerde1,HIGH);
  digitalWrite(ledRojo2,HIGH);
  delay(2000);
  

}

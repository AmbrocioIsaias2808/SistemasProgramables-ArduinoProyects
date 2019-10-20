int ledVerde1 = 10;
int ledAmarillo1= 9;
int ledRojo1= 8;

int ledVerde2= 7;
int ledAmarillo2= 6;
int ledRojo2= 5;

int buzzer=13;
int pulsador=3;

int sleep=500;

int cambiar=0;

/*
  cambio=0 : cambio del semaforo 1 al 2;
  cambio=1 : cambio del semaforo 2 al 1;
*/

void cambio(int VerdeEncendido, int RojoEncendido, int AmarilloAEncender, int VerdeAEncender, int RojoAEncender){
  digitalWrite(VerdeEncendido, HIGH);
  digitalWrite(RojoEncendido, HIGH);
  delay(sleep);
  digitalWrite(buzzer,HIGH);
  delay(sleep);
  digitalWrite(buzzer,LOW);
  digitalWrite(VerdeEncendido,LOW);
  delay(sleep);
  digitalWrite(buzzer,HIGH);
  digitalWrite(VerdeEncendido,HIGH);
  delay(sleep);
  digitalWrite(buzzer,LOW);
  digitalWrite(VerdeEncendido,LOW);
  delay(sleep);
  digitalWrite(buzzer,HIGH);
  digitalWrite(VerdeEncendido,HIGH);
  delay(sleep);
  digitalWrite(buzzer,LOW);
  digitalWrite(VerdeEncendido,LOW);
  delay(sleep);
  digitalWrite(buzzer,HIGH);
  digitalWrite(VerdeEncendido,HIGH);
  delay(sleep);
  digitalWrite(buzzer,LOW);
  digitalWrite(VerdeEncendido,LOW);
  delay(sleep);
  digitalWrite(buzzer,HIGH);
  digitalWrite(AmarilloAEncender,HIGH);
  delay(sleep);
  digitalWrite(buzzer,LOW);
  digitalWrite(AmarilloAEncender,LOW);
  digitalWrite(RojoEncendido,LOW);
  digitalWrite(VerdeAEncender,HIGH);
  delay(sleep);
  digitalWrite(buzzer,HIGH);
  digitalWrite(RojoAEncender,HIGH);
  delay(sleep);
  digitalWrite(buzzer,LOW);
  delay(2000);
  }
  
void SMforo1AL2(){
  cambio(ledVerde1, ledRojo2, ledAmarillo1, ledVerde2, ledRojo1);
  }

void SMforo2AL1(){
    cambio(ledVerde2, ledRojo1, ledAmarillo2, ledVerde1, ledRojo2);
    }
    
void setup() {
  // put your setup code here, to run once:
  pinMode(ledVerde1,OUTPUT);
  pinMode(ledVerde2,OUTPUT);
  pinMode(ledAmarillo1,OUTPUT);
  pinMode(ledAmarillo2,OUTPUT);
  pinMode(ledRojo1,OUTPUT);
  pinMode(ledRojo2,OUTPUT);
  pinMode(pulsador,INPUT);
  pinMode(buzzer,buzzer);
  digitalWrite(ledVerde1,HIGH);
  digitalWrite(ledRojo2,HIGH);
  
}

void loop() {
    while(digitalRead(pulsador)==LOW){
        
    }
    
   if(cambiar==0 and digitalRead(pulsador)==HIGH){
      cambiar=1;
      SMforo1AL2();
   }else{
    cambiar=0;
    SMforo2AL1();
    }

}

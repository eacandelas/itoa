#define RETRASO_ON 1000
#define RETRASO_OFF 500

#define LED 3
void setup(){
  
  pinMode(LED,OUTPUT);
  
}

void loop(){
  digitalWrite(LED,HIGH);
  delay(RETRASO_ON);
  digitalWrite(LED,LOW);
  delay(RETRASO_OFF);
}
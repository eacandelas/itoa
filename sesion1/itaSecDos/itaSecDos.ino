
void setup(){
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop(){
  
  for(int x=3; x<7;x++){
    digitalWrite(x,HIGH);
    delay(500);
    digitalWrite(x,LOW);
  }
  
/*  for(int x=5 ; x>3 ; x-- ){
    digitalWrite(x,HIGH);
    delay(500);
    digitalWrite(x,LOW);
  } 
*/
  
}

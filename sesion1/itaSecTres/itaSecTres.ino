
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
    delay(500);
  }
  
  for(int x=6 ; x>3 ; x-- ){
    digitalWrite(x,HIGH);
    delay(500);
    digitalWrite(x,LOW);
    delay(500);  
  } 

  for(int x=4, y=5; x>2&&y<7;x--,y++){
    digitalWrite(x,HIGH);
    digitalWrite(y,HIGH);
    delay(500);
    digitalWrite(x,LOW); 
    digitalWrite(y,LOW);     
    delay(500);    
  } 
}

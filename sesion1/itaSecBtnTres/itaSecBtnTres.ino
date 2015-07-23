// ita-btn-uno.ino

int contador = 0;
int estado;
int pasado;


void setup() {
	pinMode(2,INPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
	pinMode(6,OUTPUT);
	Serial.begin(9600);
}

void loop() {
	secuencia();
}

void stdBoton(){
	estado = digitalRead(2);
	if (pasado == 1 && estado == 0){
		contador++;
		
		Serial.println("Boton presionado");
		Serial.print("Contador: ");
		Serial.println(contador);
		pasado = estado;
		if (contador == 3){contador = 0;}
	}
	else if ( pasado == 0 && estado ==1){
		Serial.println("Boton liberado");
		pasado = estado;
	}
	else{
		
	}
}

void secuencia(){
	switch (contador){
	  case 0: 
	    for(int x=3; x<7;x++){
	      digitalWrite(x,HIGH);
	      delay(500);
	      digitalWrite(x,LOW);
	      stdBoton();
	    }
	    break;
	  case 1:
	    for(int x=6 ; x>2 ; x-- ){
	      digitalWrite(x,HIGH);
	      delay(500);
	      digitalWrite(x,LOW);
	    stdBoton();
	    } 
	    break;
	    
	   case 2: 
	    for(int x=4, y=5; x>2&&y<7;x--,y++){
	      digitalWrite(x,HIGH);
	      digitalWrite(y,HIGH);
	      delay(500);
	      digitalWrite(x,LOW); 
	      digitalWrite(y,LOW);
	    stdBoton();
	    }
	    break;
	 }
}

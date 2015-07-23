// ita-btn-uno.ino

int contador = 0;
int pasado;
int estado; 

void setup() {
	pinMode(3, OUTPUT);
	pinMode(2,INPUT);
	Serial.begin(9600);
}

void loop() {
	
	if(contador == 0){
		digitalWrite(3,HIGH);
  		delay(1000);
  		checkBoton();
  		digitalWrite(3,LOW);
  		delay(1000);
  		checkBoton();
	}else if(contador == 1){
		digitalWrite(3,HIGH);
  		delay(600);
  		checkBoton();
  		digitalWrite(3,LOW);
  		delay(600);
  		checkBoton();
	}else if(contador == 2){
		digitalWrite(3,HIGH);
  		delay(200);
  		checkBoton();
  		digitalWrite(3,LOW);
  		delay(200);
  		checkBoton();
	}

}

void checkBoton(){
	estado = digitalRead(2);
	if (pasado == 1 && estado == 0){
		contador++;
		
		Serial.println("Boton presionado");
		Serial.print("Contador: ");
		Serial.println(contador);
		pasado = estado;
		//if (contador == 3){contador = 0;}
	}
	else if ( pasado == 0 && estado ==1){
		Serial.println("Boton liberado");
		pasado = estado;
	}
	else{
		
	
}
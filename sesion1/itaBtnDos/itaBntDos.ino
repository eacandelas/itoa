// ita-btn-uno.ino
int contador = 0;
int estado;
int pasado;

void setup() {
	pinMode(2,INPUT);
	Serial.begin(9600);
}

void loop() {
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
}
// ita-btn-uno.ino

int contador = 0;
int estado;
int pasado;

void setup() {
	pinMode(3, OUTPUT);
	pinMode(2,INPUT);
	Serial.begin(9600);
}

void loop() {
	checkBoton();
	if(contador == 0){
		sec1();
	}else if(contador == 1){
		sec2();
	}else(contador == 2){
		sec3();
	}

}

void checkBoton(){
	int estado = digitalRead(2);
	if (estado == 0){
		contador++;
		Serial.print("Contador: ");
		Serial.println(contador);
	}
}

void sec1(){
	digitalWrite(3,HIGH);
	delay(1000);
	digitalWrite(3,LOW);
	delay(1000);
}

void sec2(){
	digitalWrite(3,HIGH);
	delay(600);
	digitalWrite(3,LOW);
	delay(600);

}

void sec3(){
	digitalWrite(3,HIGH);
	delay(200);
	digitalWrite(3,LOW);
	delay(200);

}


// ita-btn-uno.ino

int contador = 0;

void setup() {
	pinMode(2,INPUT);
	Serial.begin(9600);
}

void loop() {
	int estado = digitalRead(2);
	if (estado == 0){
		contador++;
		Serial.print("Contador: ");
		Serial.println(contador);
	}
}
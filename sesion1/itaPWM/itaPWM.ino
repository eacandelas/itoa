
void setup() {
	pinMode(3,OUTPUT);
	Serial.begin(9600);
}

void loop() {
	int lectura = analogRead(0);
	Serial.print("Lectura: ");
	Serial.println(lectura);
	int valorAnalogo = map(lectura,0,1024,0,255);
	Serial.print("Analogo: ");
	Serial.println(valorAnalogo);
	analogWrite(3, valorAnalogo); 
	delay(500);
}
	

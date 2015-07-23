int dato = 0;   // for incoming serial data

void setup() {
        Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {

    if (Serial.available() > 0) {
        dato = Serial.read();

        Serial.print("Dato: ");
        Serial.println(dato);
    }

	if ( a == 2){
		digitalWrite(2, HIGH);

	}else if (a == 3){
		digitalWrite(3, HIGH);

	}else if (a == 4){
		digitalWrite(4, HIGH);

	}else if (a == 5){
		digitalWrite(5, HIGH);

	}else if (a == 0){
		digitalWrite(1, LOW);
		digitalWrite(2, LOW);
		digitalWrite(3, LOW);
		digitalWrite(4, LOW);

	}else{
		Serial.println(“No reconocido”);
		
	}

}






void setup(){
	pinMode(3, OUTPUT);
	Serial.begin(9600);
}

void loop(){

	for (int i = 0; i <10; i ++){
		digitalWrite(3, HIGH);
		delay(500);
		digitalWrite(3, LOW);
		delay(500);
	}
	delay(5000);	
}

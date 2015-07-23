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


}



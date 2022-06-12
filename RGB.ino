int Rpin=9; int Gpin=10; int Bpin=11;
void setup() {
     pinMode(Rpin, OUTPUT);
     pinMode(Gpin, OUTPUT);
     pinMode(Bpin, OUTPUT);
}

void loop() {
     analogWrite(Rpin, 255); analogWrite(Gpin, 0); analogWrite(Bpin, 0);
     delay(500); //빨강
     analogWrite(Rpin, 0); analogWrite(Gpin, 255); analogWrite(Bpin, 0);
     delay(500); //그린
     analogWrite(Rpin, 0); analogWrite(Gpin, 0); analogWrite(Bpin, 255);
     delay(500); //블루
}

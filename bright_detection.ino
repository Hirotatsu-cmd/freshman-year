int photoResistor = A0;
int bright;

void setup() {
   pinMode(photoResistor, INPUT);
   Serial.begin(9600);
}

void loop() {
   bright = analogRead(photoResistor);
   Serial.println(bright);
}

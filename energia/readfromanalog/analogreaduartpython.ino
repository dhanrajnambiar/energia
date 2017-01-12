int anval;
int anpin = 29;
void setup() {
  // put your setup code here, to run once:
pinMode(anpin, INPUT);
Serial.begin(57600);
}

void loop() {
  anval = analogRead(anpin);
  Serial.println(anval, DEC);
  delay(100);
}

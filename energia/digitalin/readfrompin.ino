int inputpin = 12;
int incomingbyte;
void setup() {
  // put your setup code here, to run once:
pinMode(inputpin, INPUT);
Serial.begin(9660);
}

void loop() {
  // put your main code here, to run repeatedly: 
  incomingbyte = digitalRead(inputpin);
  if (incomingbyte==1)
    Serial.print("HIGH \n");
  else
    Serial.print("LOW \n");
  delay(3000);
}

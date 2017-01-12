#include <stdint.h>
const uint16_t startstate = 0xACE1u;
int outpin = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(outpin, OUTPUT);
  Serial.begin(9660);
}

void loop(){
uint16_t lfsr = startstate;
uint16_t lsb;
unsigned period = 0;
do
{
  lsb = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5)) & 1;
  lfsr = (lfsr >> 1) | (lsb << 15);
  ++period;
  Serial.print(lsb);
  if (lsb == 1)
    digitalWrite(outpin, HIGH);
  else
    digitalWrite(outpin, LOW);
    delay(10);
} while(lfsr != startstate);
}

// Nand Gate
#define SW1 3
#define SW2 2
#define LED 8

void setup() {
 pinMode(SW1,INPUT_PULLUP);
 pinMode(SW2,INPUT_PULLUP);
 pinMode(LED,OUTPUT);
}
void loop() {
 if(digitalRead(SW1) == 1 && digitalRead(SW2) == 1)
 digitalWrite(LED,0);
 else
 digitalWrite(LED,1);
}
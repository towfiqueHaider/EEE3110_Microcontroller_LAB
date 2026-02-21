//OR gate
#define SW1 3
#define SW2 2
#define LED 8

void setup() {
 pinMode(SW1,INPUT_PULLUP);
 pinMode(SW2,INPUT_PULLUP);
 pinMode(LED,OUTPUT);
}
void loop() {
 if(digitalRead(SW1) == HIGH && digitalRead(SW2) == HIGH)
 digitalWrite(LED,HIGH);
 else
 digitalWrite(LED,LOW);
}
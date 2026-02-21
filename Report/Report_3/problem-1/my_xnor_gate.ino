// Xnor Gate
#define SW1 3
#define SW2 2
#define LED 8

int a,b,y;

void setup() {
 pinMode(SW1,INPUT_PULLUP);
 pinMode(SW2,INPUT_PULLUP);
 pinMode(LED,OUTPUT);
}
void loop() {
 a = digitalRead(SW1);
 b = digitalRead(SW2);

 y = (!a)&&(b) || (a)&&(!b);
 
 digitalWrite(LED,!y);


}
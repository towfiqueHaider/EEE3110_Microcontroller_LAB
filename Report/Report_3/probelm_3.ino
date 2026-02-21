// Nand Gate
#define SW1 4
#define SW2 3
#define SW3 2
#define LED 8

int a,b,c,s;
void setup() {
 pinMode(SW1,INPUT_PULLUP);
 pinMode(SW2,INPUT_PULLUP);
 pinMode(SW3,INPUT_PULLUP);
 pinMode(LED,OUTPUT);
 Serial.begin(9600);

}

void loop() {
 a = digitalRead(SW1);
 b = digitalRead(SW2);
 c = digitalRead(SW3);

 if((a+b+c)>=2) digitalWrite(LED,1);
 else digitalWrite(LED,0);


}
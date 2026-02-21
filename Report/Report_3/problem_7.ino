// Nand Gate
#define SW1 3
#define SW2 4
#define select_switch 2
#define LED 8

int I0,I1,S;
void setup() {
 pinMode(SW1,INPUT_PULLUP);
 pinMode(SW2,INPUT_PULLUP);
 pinMode(select_switch,INPUT_PULLUP);
 pinMode(LED,OUTPUT);
 Serial.begin(9600);

}

void loop() {
 I0 = !digitalRead(SW1);
 I1 = !digitalRead(SW2);
 S = !digitalRead(select_switch);

 if(S != 0){
  digitalWrite(LED,I0);
 }
 else{
  digitalWrite(LED,I1);
}

 
}
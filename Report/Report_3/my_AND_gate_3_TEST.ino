// Nand Gate
#define SW1 4
#define SW2 3
#define SW3 2
#define LED 8

void setup() {
 pinMode(SW1,INPUT_PULLUP);
 pinMode(SW2,INPUT_PULLUP);
 pinMode(SW3,INPUT_PULLUP);
 pinMode(LED,OUTPUT);
 Serial.begin(9600);

}
void loop() {
 if(digitalRead(SW1) == 1 && digitalRead(SW2) == 1 && digitalRead(SW3) == 1)
 digitalWrite(LED,1);
 else
 digitalWrite(LED,0);
Serial.print(!digitalRead(SW1));
Serial.print("   ");
Serial.print(!digitalRead(SW2));
Serial.print("   ");
Serial.println(!digitalRead(SW3));

}

// // Nand Gate
// #define SW1 3
// #define SW2 2
// #define LED 8

// int a,b,y;

// void setup() {
//  pinMode(SW1,INPUT_PULLUP);
//  pinMode(SW2,INPUT_PULLUP);
//  pinMode(LED,OUTPUT);
// }
// void loop() {
//  a = digitalRead(SW1);
//  b = digitalRead(SW2);

//  y = (!a)&&(b) || (a)&&(!b);
 
//  digitalWrite(LED,y);


// }
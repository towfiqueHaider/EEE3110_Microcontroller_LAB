#define SW1 4
#define SW2 3
#define SW3 2
#define LED_CARRY 9
#define LED_SUM 8

int a,b,c,s;
void setup() {
 pinMode(SW1,INPUT_PULLUP);
 pinMode(SW2,INPUT_PULLUP);
 pinMode(SW3,INPUT_PULLUP);
 pinMode(LED_CARRY,OUTPUT);
 pinMode(LED_SUM,OUTPUT);
 Serial.begin(9600);

}

void loop() {
 a = !digitalRead(SW1);
 b = !digitalRead(SW2);
 c = !digitalRead(SW3);

//  if((a+b+c)>=2) digitalWrite(LED,1);
//  else digitalWrite(LED,0);
 byte x = 0b00000000;
 bitWrite(x, 2, a);
 bitWrite(x, 1, b);
 bitWrite(x, 0, c);
 int y = x;
 Serial.println(y);

 switch(y){
  case 0:
    digitalWrite(LED_CARRY,0);
    digitalWrite(LED_SUM,0);
    break;
 
  case 1:
    digitalWrite(LED_CARRY,0);
    digitalWrite(LED_SUM,1);
    break;
 
  case 2:
    digitalWrite(LED_CARRY,0);
    digitalWrite(LED_SUM,1);
    break;
 
  case 3:
    digitalWrite(LED_CARRY,1);
    digitalWrite(LED_SUM,0);
    break;
 
  case 4:
    digitalWrite(LED_CARRY,0);
    digitalWrite(LED_SUM,1);
    break;
 
  case 5:
    digitalWrite(LED_CARRY,1);
    digitalWrite(LED_SUM,0);
    break;
 
  case 6:
    digitalWrite(LED_CARRY,1);
    digitalWrite(LED_SUM,0);
    break;
 
  case 7:
    digitalWrite(LED_CARRY,1);
    digitalWrite(LED_SUM,1);
    break;
 }

 
}
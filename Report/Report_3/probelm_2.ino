int led1 = 11;
int led2 = 10;
int led3 = 9;
int led4 = 8;

int sw1 = 2;
int sw2 = 3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT);

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int a = !digitalRead(2);
  int b = digitalRead(3);

  if(a == 0){
    digitalWrite(led1,0);
    digitalWrite(led2,1);
  }
  else{
    digitalWrite(led1,1);
    digitalWrite(led2,0);
  }
  
  if(b == 0){
    digitalWrite(led3,0);
    digitalWrite(led4,1);
  }
  else{
    digitalWrite(led3,1);
    digitalWrite(led4,0);
  }
  
  // Serial.print(!digitalRead(2));
  // Serial.print("  ");
  // Serial.println(digitalRead(3));

}

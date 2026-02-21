int led = 8;
int sw1 = 2;
int sw2 = 3;
int sw3 = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int a = !digitalRead(2);
  int b = digitalRead(3);
  int c = !digitalRead(4);

  int s = a+b+c;

  if(s%2 != 0){
    digitalWrite(led, HIGH);
  }
  else{
  digitalWrite(led, LOW);
  }

  // Serial.print(!digitalRead(2));
  // Serial.print("  ");
  // Serial.print(digitalRead(3));
  // Serial.print("  ");
  // Serial.println(!digitalRead(4));

}

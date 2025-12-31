int LED1 = 7; //x=7(20230105067) greenLed
int LED2 = 2; // 9-x = 9-7 = 2 , redLed
void setup() {
  // put your setup code here, to run once:
  pinMode(LED2,OUTPUT);
  pinMode(LED1,OUTPUT);  
}
void loop() {
  // put your main code here, to run repeatedly:
  //0-1 second
  digitalWrite(LED1,1);
  digitalWrite(LED2,0);
  delay(1000);

  //1-2 second
  digitalWrite(LED1,0);
  digitalWrite(LED2,0);
  delay(1000);

  //2-3 second
  digitalWrite(LED1,0);
  digitalWrite(LED2,1);
  delay(1000);
  
  //3-4 second
  digitalWrite(LED1,0);
  digitalWrite(LED2,0);
  delay(1000);
  
  //4-5 second
  digitalWrite(LED1,1);
  digitalWrite(LED2,1);
  delay(1000);

  //5-6 second
  digitalWrite(LED1,0);
  digitalWrite(LED2,0);
  delay(1000); 
}

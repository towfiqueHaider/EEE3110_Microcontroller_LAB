int LED1 = 7; //x=7(20230105067) greenLed
int LED2 = 2; // 9-x = 9-7 = 2 , redLed
int A,B;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED2,OUTPUT);
  pinMode(LED1,OUTPUT);  

  Serial.print("Enter value of A: ");
  while(Serial.available()==0){
    //Wait for input
  }
  A = Serial.parseInt();
  Serial.println(A);

  Serial.print("Enter value of B: ");
  while(Serial.available()==0){
    //Wait for input
  }
  B = Serial.parseInt();
  Serial.println(B);

  if(A%B == 0){
    digitalWrite(LED1, 1);
    digitalWrite(LED2, 0);
  }
  else{
    digitalWrite(LED1, 0);
    digitalWrite(LED2, 1);    
  }  

}
void loop() {
  // put your main code here, to run repeatedly:

}

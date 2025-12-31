int greenLed = 2; 
int n;
int limit = 50;
int delay_time = 200;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(greenLed,OUTPUT);
  
  while(true){
  Serial.print("Enter the value of n: ");
  while(Serial.available() == 0){}
  n = Serial.parseInt();
  Serial.println(n);
/*
(if = true) Program will come out of infinite loop and the program will be finished
(if = false) Then the program wont break and infinite loop will continue, so program will ask for input again and again untill if==true

*/ 
  if(led_blink_factorial(n)){
    break; 
  }
  }  
}
void loop() {
  // put your main code here, to run repeatedly:
}
bool led_blink_factorial(int n){
    int fact = 1;
    for (int i = 1; i<=n; i++){
        fact = fact * i;
    }
    if (fact<limit){
      for(int j = 0; j<fact; j++){
      digitalWrite(greenLed,1);
      delay(delay_time);
      digitalWrite(greenLed,0);
      delay(delay_time);
      }
      return true;
    }
    else{
      Serial.print("The number of blinking exceeds ");
      Serial.print(limit);
      Serial.println(". Try again with a smaller value. ");
      return false;

    }

}

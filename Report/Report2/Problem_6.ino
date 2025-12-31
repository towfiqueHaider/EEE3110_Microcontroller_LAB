int greenLed = 7; 
int redLed = 2; 

int A = 123;
const int arr_length = 3; //A3A2A1
int a[arr_length];
bool isThree = true;

    
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(greenLed,OUTPUT);
  pinMode(redLed,OUTPUT);

  while(true){
  Serial.print("Enter a 3 digit integer input: ");
  while(Serial.available() == 0){}
  A = Serial.parseInt();
  Serial.println(A);
  
  // Checks if input is of three digit or not
  if (abs(A) >= 100 && abs(A) <= 999) {
    isThree = true;
  } 
  else {
    Serial.println("The input is not 3 digit. Try again.");
    isThree = false;
  }
/*
Breaks if input is of three digit, program will continue normally, 
but if it is false, then infinite loop will continue and user will be asked for input again
*/ 
  if(isThree == true){
    break; 
  }
  }


  for(int i = 0; i<=arr_length; i++){
        a[i] = A%10;
        A = A/10;

  }

  // // For seeing ouput
  // for(int i = arr_length-1; i>=0; i--){
  //     Serial.println(a[i]);

  //   }

    
  if(a[2]>a[0]){
    blink_led(a[1], greenLed);
  }
  else if(a[2]<a[0]){
    blink_led(a[1], redLed);    
  }
  else{

  } 


}

void loop() {
  // put your main code here, to run repeatedly:
  
  
}

void blink_led(int n, int ledPin){
  for(int i=0; i<n; i++){
    digitalWrite(ledPin, 1);
    delay(1000);
    digitalWrite(ledPin, 0);
    delay(1000);
  }
}

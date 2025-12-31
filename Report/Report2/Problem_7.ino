#define greenLed 7

int blink_number;
int on_time;
float duty_cycle;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(greenLed, OUTPUT);
  // Taking inputs
  Serial.print("Enter number of blinks: ");
  while(Serial.available()==0){
    //Wait for input
  }
  blink_number = Serial.parseInt();
  Serial.println(blink_number);

  Serial.print("Enter ON time of LED (in seconds): ");
  while(Serial.available()==0){
    //Wait for input
  }
  on_time = Serial.parseInt();
  Serial.print(on_time);
  Serial.println(" Seconds");

  Serial.print("Enter duty cycle of LED: ");
  while(Serial.available()==0){
    //Wait for input
  }

  duty_cycle = Serial.parseInt();
  Serial.print(duty_cycle);
  Serial.println(" %");

  blinkLED(blink_number, on_time, duty_cycle);

}

void loop() {
  // put your main code here, to run repeatedly:

}

void blinkLED(int blink_number, int on_time, float duty_cycle){
  

  //Logic
  float off_time;
  duty_cycle = duty_cycle/100.00;

  off_time = on_time * ((1/duty_cycle) - 1);

  // Serial.println(off_time);
  // Serial.println(duty_cycle);  

  for(int i = 0; i<blink_number; i++){
    digitalWrite(greenLed, HIGH);
    delay(on_time * 1000); 
    digitalWrite(greenLed, LOW);
    delay(off_time * 1000);
  }
}

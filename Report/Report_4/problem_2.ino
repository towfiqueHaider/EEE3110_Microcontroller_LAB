const byte lup_Table[] = {
  0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, // 0-7
  0x7F, 0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71  // 8-F
};

int n;
void setup() {
  // put your setup code here, to run once:
  for(int i = 3; i<=10; i++){
    pinMode(i,1);
  }
  // for(int i = 3; i<=10; i++){
  //   digitalWrite(i,1);
  // }
  
  Serial.begin(9600);
  Serial.println("Enter input: ");
  while(Serial.available() == 0){

  }

  n = Serial.parseInt();
  if (n < 0 || n > 15){
    Serial.println("Input is Out of bound.");
  }



  for(int j = 0; j<16; j++){
  
    if(j<n){

    byte y = lup_Table[j];
  
    for(int i = 10; i >= 3; i--){
      digitalWrite(i, bitRead(y,10-i));
      }
      delay(1000);
    }
  
  }

  for(int i = 10; i >= 3; i--){
      digitalWrite(i, 0);
      } 

}

void loop() {
  // put your main code here, to run repeatedly:
    

}

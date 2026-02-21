byte lupTable[] = 
{
0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07,
0x7F, 0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71 
};
byte y;
void setup()
{
  Serial.begin(9600);
  for (int i = 6; i<=13; i++)
  {
  pinMode(i,OUTPUT);
  }
  Serial.println("Enter Input:");
  while (Serial.available() == 0);
  int input = Serial.parseInt();
  
  for(int i = 1; i< 16; i++){
  if(i % input == 0){
  y = lupTable[i];
  PORTB = y;
  digitalWrite(6, bitRead(y,6));
  digitalWrite(7, bitRead(y,7));
  delay(1000);
  }  
  else{
    continue;
  }
  }
  y = 0;
  PORTB = y;
  digitalWrite(6, bitRead(y,6));
  digitalWrite(7, bitRead(y,7));
}
void loop() {
  // put your main code here, to run repeatedly:

}

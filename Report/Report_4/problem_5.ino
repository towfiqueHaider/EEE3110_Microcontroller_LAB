byte lupTable[] = 
{
0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07,
0x7F, 0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71 
};

byte y, sum, digit0, digit1;
byte oddIndex = 1;  
byte evenIndex = 0; 

void setup()
{
for (int i = 6; i<=15; i++)
{
pinMode(i,OUTPUT);
}

}

void loop()
{
  for(int i = 0; i<100;i++){  

  
    digitalWrite(14, HIGH);
    digitalWrite(15, LOW);
    y = lupTable[evenIndex] ;  // 0x07
    PORTB = y;
    digitalWrite(6, bitRead(y,6));
    digitalWrite(7, bitRead(y,7));
    delay(10);


    digitalWrite(15, HIGH);
    digitalWrite(14, LOW);
    y = lupTable[oddIndex] ;    // 0x4F
    // if (showDecimal) {
    //   // activatwes the point LED of the left 7sd
    //   y = y | point_cc_code;
    // }

    PORTB = y;
    digitalWrite(6, bitRead(y,6));
    digitalWrite(7, bitRead(y,7));
    delay(10);
  }
  oddIndex += 2;
  evenIndex += 2;

  // Reset indices if they go past 15
  if (oddIndex > 15) oddIndex = 1;
  if (evenIndex > 14) evenIndex = 0;
}

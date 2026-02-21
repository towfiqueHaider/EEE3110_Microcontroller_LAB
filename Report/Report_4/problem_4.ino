byte lupTable[] = 
{
0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07,
0x7F, 0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71 
};

byte point_cc_code = 0x80;

byte y, sum, digit0, digit1;
bool showDecimal = false;
void setup()
{
for (int i = 6; i<=15; i++)
{
pinMode(i,OUTPUT);
}


Serial.begin(9600);
  Serial.println("Enter Input of 2 digit:");

  while (Serial.available() == 0);

float input = Serial.parseFloat();

// Check if it's a float 0r has a fractinal part
    if (input != (int)input) {
      showDecimal = true;
      digit1 = (int)input;            // Whole number part
      digit0 = (int)(input * 10) % 10; // First decimal place
    } else {
      showDecimal = false;
      int val = (int)input;
      digit1 = val / 10;              // Tens digit
      digit0 = val % 10;              // Units digit
    }
}

void loop()
{
digitalWrite(14, HIGH);
digitalWrite(15, LOW);
y = lupTable[digit0] ;  // 0x07
PORTB = y;
digitalWrite(6, bitRead(y,6));
digitalWrite(7, bitRead(y,7));
delay(10);


digitalWrite(15, HIGH);
digitalWrite(14, LOW);
y = lupTable[digit1] ;    // 0x4F
if (showDecimal) {
  // activatwes the point LED of the left 7sd
  y = y | point_cc_code;
}

PORTB = y;
digitalWrite(6, bitRead(y,6));
digitalWrite(7, bitRead(y,7));
delay(10);
}

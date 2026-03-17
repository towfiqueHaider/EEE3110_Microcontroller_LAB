byte lookuptable[16]={  
0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07,0x7F, 0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71 };  

void setup() {  
  analogReference(DEFAULT);  
  pinMode(A4, INPUT);  
  
  for (int i = 6; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
}  

void loop(){  
  int x = analogRead(A4);  
  float T = (float)((100 * (5 / 1023.0)) * x);   
  
  for (int j = 0; j < 100; j++) {  
    int T2 = round(T * 100);  
    for (int i = 0; i < 4; i++) {  
      
      
      digitalWrite(A0, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, HIGH);
      digitalWrite(A3, HIGH);

      byte y = lookuptable[T2 % 10];
      
      PORTB = y; 
      
 
      digitalWrite(6, bitRead(y, 6));

      if (i == 2){
        digitalWrite(7,1);

      }
      else{
      digitalWrite(7, bitRead(y, 7));
      }

      // Digit selection logic
      if (i == 0) digitalWrite(A3, LOW);
      if (i == 1) digitalWrite(A2, LOW);
      if (i == 2) digitalWrite(A1, LOW);
      if (i == 3) digitalWrite(A0, LOW);

      delay(5);  
      T2 = T2 / 10;  
    }
  }
}
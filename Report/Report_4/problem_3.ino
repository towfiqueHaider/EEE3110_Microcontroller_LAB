uint8_t lup_Table[16] =
{
  0xF3, 0x12, 0xCB, 0x9B, 0x3A, 0xB9, 0xF9, 0x92, 0xFB, 0xBB, 0xFA, 0x79, 0xE1, 0x5B, 0xE9, 0xE8  
};
int n;
void setup() {
  // put your setup code here, to run once:
  DDRD = 0b11111111;
}
void loop() {
  // put your main code here, to run repeatedly:
   for(int i = 0; i<16; i++){
    byte y = lup_Table[i];
    PORTD = y;
    delay(1000);
  }
    

}

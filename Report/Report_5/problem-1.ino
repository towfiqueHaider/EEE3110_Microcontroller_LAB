void setup() {
Serial.begin(9600);
analogReference(DEFAULT);

pinMode(A0,INPUT);
}
void loop(){
int x=analogRead(A4);
float T =(float)((100*(5/1023.0))*x); 

Serial.println(T);
delay(1000);
}
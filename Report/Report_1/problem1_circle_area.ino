void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  float radius, area;
  Serial.println("Please Enter radius value: ");

  while(Serial.available() == 0){
    //wAIT FOR INPUT
  }
  radius = Serial.parseFloat();
  area = (3.1416)*pow(radius,2);
  Serial.print("Area of the circle with radius ");
  Serial.print(radius);
  Serial.print(" is: ");
  Serial.println(area);

}

void loop() {
  // put your main code here, to run repeatedly:

}

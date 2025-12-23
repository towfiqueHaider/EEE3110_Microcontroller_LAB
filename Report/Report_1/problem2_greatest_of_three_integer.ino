int a, b, c;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  Serial.println("Please 1st integer value: ");
  while(Serial.available() == 0){
    //wAIT FOR INPUT
  }
  a = Serial.parseInt();
  Serial.print("The first value: ");
  Serial.println(a);


  Serial.println("Please 2nd integer value: ");
  while(Serial.available() == 0){
    //wAIT FOR INPUT
  }
  b = Serial.parseInt();
  Serial.print("The second value: ");
  Serial.println(b);
  
  Serial.println("Please 3rd integer value: ");
  while(Serial.available() == 0){
    //wAIT FOR INPUT
  }
  c = Serial.parseInt();
  Serial.print("The third value: ");
  Serial.println(c);

  if (a < b){
    if(a < c){
      Serial.println("The first value is the smallest of the three.");
    }
    else{
      Serial.println("The third value is the smallest of the three.");
    }
  }
  else{
    if(b < c){
      Serial.println("The second value is the smallest of the three.");
    }
    else{
      Serial.println("The third value is the smallest of the three.");
    }

  }
  
  
 
}

void loop() {
  // put your main code here, to run repeatedly:

}

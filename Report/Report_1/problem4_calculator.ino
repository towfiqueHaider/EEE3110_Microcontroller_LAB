int a, b;
String operation = "";
float result;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  Serial.print("First input: ");
  while(Serial.available() == 0){
    //wAIT FOR INPUT
  }
  a = Serial.parseInt();
  Serial.println(a);


  Serial.print("Second input: ");
  while(Serial.available() == 0){
    //wAIT FOR INPUT
  }
  b = Serial.parseInt();
  Serial.println(b);

  
  Serial.print("Operation: ");
  while(Serial.available() == 0){
    //wAIT FOR INPUT
  }
  operation = Serial.readString();
  
  Serial.println(operation);

  if(operation == "Addition"){
    result = a + b;
    Serial.print("Output= ");
  	Serial.println(result);
  }
  
  else if(operation == "Subtraction"){
    result = a - b;
    Serial.print("Output= ");
  	Serial.println(result);
  }
  
  else if(operation == "Multiplication"){
    result = a * b;
    Serial.print("Output= ");
  	Serial.println(result);
  }
  
  else if(operation == "Division"){
    if(b!=0){
      result = (float) a / b ;
      Serial.print("Output= ");
  	  Serial.println(result);
    }
    else{
      Serial.println("Division by zero is undefined");      
    }
  }
  else{
      Serial.println("Invalid operation. Try again.");

  }  
  
 
}

void loop() {
  // put your main code here, to run repeatedly:

}

int A, B;
String operation = "";
float result;

//int LED1 = 7; //x=7(20230105067) greenLed
int warningLED = 2; // 9-x = 9-7 = 2 , redLed

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(warningLED,OUTPUT);
//  pinMode(LED1,OUTPUT); 
  
  Serial.print("First input: ");
  while(Serial.available() == 0){
    //wAIT FOR INPUT
  }
  A = Serial.parseInt();
  Serial.println(A);

  Serial.print("Second input: ");
  while(Serial.available() == 0){
    //wAIT FOR INPUT
  }
  B = Serial.parseInt();
  Serial.println(B);
  
  Serial.print("Operation: ");
  while(Serial.available() == 0){
    //wAIT FOR INPUT
  }
  operation = Serial.readString();
  
  Serial.println(operation);

  if(operation == "Add" || operation == "+"){
    result = A + B;
    Serial.print("Output= ");
  	Serial.println(result);
  }
  
  else if(operation == "Subtract" || operation == "-"){
    result = A - B;
    Serial.print("Output= ");
  	Serial.println(result);
  }
  
  else if(operation == "Multiply" || operation == "*"){
    result = A * B;
    Serial.print("Output= ");
  	Serial.println(result);
  }
  
  else if(operation == "Division" || operation == "/"){
    if(B!=0){
      result = (float) A / B ;
      Serial.print("Output= ");
  	  Serial.println(result);
    }
    else{
      Serial.println("Division by zero is undefined");      
    }
  }
  
    
  else if(operation == "Modulus" || operation == "%"){    
      result =  A % B ;
      Serial.print("Output= ");
  	  Serial.println(result);   
    
  }
  else{
      Serial.println("Invalid operation. Try again.");
      digitalWrite(warningLED,1);

  }  
  
 
}

void loop() {
  // put your main code here, to run repeatedly:

}

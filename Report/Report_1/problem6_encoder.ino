String input = "";
int count = 0;
int position;

void setup() {
  Serial.begin(9600);
  Serial.println("Enter a 4-bit one-hot binary value:");
    // Wait for input from Serial Monitor
  while(Serial.available()==0){}
    input = Serial.readString();
    Serial.print("Input: ");

    Serial.println(input);
  
  //Checks if the string is 4 bits long
  if (input.length() != 4) {
    Serial.println("Wrong");
    return;
  }
  //Checks if every character is 0 or 1

  for (int i = 0; i < 4; i++) {
  if (input[i] != '0' && input[i] != '1') { 
    Serial.println("Wrong");
    return;
  }
  }
  
    
  for (int i = 0; i < 4; i++) {
  	
    if(input[i] == '1'){
      count++;
      position = 3 - i;
    }
  }
    //Serial.println(count);
    if(count>1) {
    Serial.println("Wrong");
    return;
    }

    String binary_output = "";

    switch(position){
      case 0:
      	binary_output = "00";
      	break;
      case 1:
      	binary_output = "01";
      	break;
      case 2:
      	binary_output = "10";
      	break;
      case 3:
      	binary_output = "11";
      	break;
    }
    // Serial.print("Input: ");

    // Serial.println(input);

    Serial.print("Output: ");
    Serial.print(binary_output);
    Serial.print(" (D");
    Serial.print(position);
    Serial.println(")");
  


  
}

void loop() {    
    
      
}

int greenLed = 7;   // Green LED = Y1
int redLed = 2;   // Green LED = Y1

String input = "";

void setup() {
  Serial.begin(9600);
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  
  // Take 4-bit input
  Serial.print("Enter a 4-bit binary input: ");
  while (Serial.available() == 0) {
    // wait
  }

  input = Serial.readStringUntil('\n');

  Serial.println(input);

  //Checks if the string is 4 bits long
  if (input.length() != 4) {
    Serial.println("The number is not 4 bits long. Try again");
    return;
  }
  //Checks if every character is 0 or 1

  for (int i = 0; i < 4; i++) {
  if (input[i] != '0' && input[i] != '1') { 
    Serial.println("The number is not binary. Try again.");
    return;
  }
  }

  //Extract bits  and convert char to integer
  int D3 = input[0] - '0';
  int D2 = input[1] - '0';
  int D1 = input[2] - '0';
  int D0 = input[3] - '0';

  if (D3 == 0 && D2 == 0 && D1 == 0 && D0 == 0) {
    Serial.println("INVALID");
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed, LOW);
    return;
  }

  // Priority Encoder Logic
  int Y1 = 0, Y0 = 0;

  if (D3 == 1) {
    Y1 = 1; 
    Y0 = 1;
  }
  else if (D2 == 1) {
    Y1 = 1; 
    Y0 = 0;
  }
  else if (D1 == 1) {
    Y1 = 0; 
    Y0 = 1;
  }
  else if (D0 == 1) {
    Y1 = 0; 
    Y0 = 0;
  }

  Serial.print("Output (Y1 Y0) = ");
  Serial.print(Y1);
  Serial.println(Y0);

  // LED Output
  digitalWrite(greenLed, Y1);
  digitalWrite(redLed, Y0);

}

void loop() {
}

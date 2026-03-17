String REFERENCE_MODE;
float reference_voltage = 5.0; 

void setup() {
  Serial.begin(9600);
  Serial.println("Enter Reference Mode (Internal / Default / External):");

  while (Serial.available() == 0) {}
  REFERENCE_MODE = Serial.readString();

  if (REFERENCE_MODE == "Internal") {
    analogReference(INTERNAL);
    reference_voltage = 1.1;
    Serial.println("Reference mode = Internal 1.1V");
  } 
  else if (REFERENCE_MODE == "Default") {
    analogReference(DEFAULT);
    reference_voltage = 5.0;
    Serial.println("Reference mode = DEFAULT 5V");
  } 
  else if (REFERENCE_MODE == "External") {
    analogReference(EXTERNAL);
    Serial.println("Enter External Reference Voltage (0.0 - 5.0V):");
    while (Serial.available() == 0) {}
    reference_voltage = Serial.parseFloat();
    Serial.print("Reference mode = EXTERNAL. Voltage set to: ");
    Serial.println(reference_voltage);
  } 
  else {
    Serial.println("Invalid input. Defaulting to 5V.");
    REFERENCE_MODE = "Default";
    analogReference(DEFAULT);
  }
}

void loop() {
  float x = analogRead(A0);
  
  float voltage = (x * reference_voltage) / 1024.0;
  float T = voltage * 100.0;
  
  Serial.print("Temperature: ");
  Serial.print(T);
  Serial.println(" C");
  
  delay(1000);
}
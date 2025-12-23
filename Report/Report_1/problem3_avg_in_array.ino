//int size = 4;
int my_arr[4] = {1,2,3,4};
int sum = 0;
float avg;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  for(int i = 0; i<4; i++){
    sum += my_arr[i];    
  }
  avg = sum / 4.00;
//  Serial.println(sum);
  Serial.print("The average of the 4 elements in the array is: ");
  Serial.println(avg);

}

void loop() {
  // put your main code here, to run repeatedly:

}

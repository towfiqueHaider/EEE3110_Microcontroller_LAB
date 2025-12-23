//Student ID
const int id_length = 9;
unsigned long arr_id[id_length];
unsigned long n;

void setup() {
  //n = 190105123;
  Serial.begin(9600);

  Serial.print("Student ID: ");
  while(Serial.available()==0){
    //Wait for input
  }
  n = Serial.parseInt();
  Serial.println(n);
  
  int i = id_length-1;
  while(n!= 0){
  arr_id[i] = n%10;
  n = n/10;
  i--;
  }
  // //Displaying array value
  // for(int j =0; j<9; j++){
  //   //cout<<arr_id[j]<<endl;
  //   Serial.println(arr_id[j]);
  //  }
  // Admission Year
  //cout<<"Admission Year: "<<20<<arr_id[0]<<arr_id[1]<<endl;
  //cout<<"Admission Year: "<<2000+(arr_id[0]*10)+arr_id[1]<<endl;

  Serial.print("Admission Year: ");
  Serial.println(2000+(arr_id[0]*10)+arr_id[1]);
 // Serial.print(arr_id[0]);
 // Serial.println(arr_id[1]);
  
  //Term
    if(arr_id[3] == 1){
        //cout<<"Term: Spring"<<endl;
      Serial.println("Term: Spring");
    }
    if(arr_id[3] == 2){
      Serial.println("Term: Fall");
    }
  
      /*Department code
    Archi = 1
    CSE = 4
    EEE= 5,
    ME = 8
    Civil = 3
    Textile = 6
    IPE = 7
    BBA = 2

*/
    switch(arr_id[5]){
    case 1:
        //cout<<"Department: Archi"<<endl;
      	Serial.println("Department: Archi");
        break;

    case 2:
      	Serial.println("Department: BBA");
        break;

    case 3:
      	Serial.println("Department: Civil");
        break;

    case 4:
      	Serial.println("Department: CSE");
        break;

    case 5:
      	Serial.println("Department: EEE");
        break;

    case 6:
      	Serial.println("Department: Textile");
        break;

    case 7:
      	Serial.println("Department: IPE");
        break;

    case 8:
      	Serial.println("Department: ME");
        break;
    }
  

    //Roll number
    //cout<<"Roll. No.: "<<arr_id[6]<<arr_id[7]<<arr_id[8]<<endl;

    Serial.print("Roll. No.: ");
    Serial.print(arr_id[6]);
    Serial.print(arr_id[7]);
    Serial.println(arr_id[8]);


}

void loop() {
  // put your main code here, to run repeatedly:

}

void init_BT() {
  
  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
//  Serial.begin(9600);
  mySerial.println("Hello Bluetooth");
  Serial.println("Hello USB");
}

void com_BT() {
  mySerial.print("Sonar: ");
  mySerial.print(distance);
  mySerial.println("cm");

}
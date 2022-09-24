// int sens_1 = A0;
// int sens_1_val = 0;
int sonartrig = 8;
int sonarecho = 9;
int duration = 0;
int distance = 0;

//for BTModule
#include <SoftwareSerial.h>
SoftwareSerial mySerial(0, 1); // RX, TX


void setup() {
  
  // pinMode(sens_1, INPUT);
  pinMode(sonartrig, OUTPUT);
  pinMode(sonarecho, INPUT);

  init_BT();
  
  Serial.begin(9600);
}



void loop() {
  
  // sens_1_val = analogRead(sens_1);
  
  // Serial.println(sens_1_val);
  // delay(1000);

  SonarSensorRead();
  if (distance > 5) {
    Serial.print(distance);
    Serial.println("cm");
  }
  if (distance < 5) {
    Serial.println("O ma go ma");
  }

  com_BT();
  delay(200);

} 
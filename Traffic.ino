#include <Servo.h>

#define LED_G 12 //define green LED pin
#define LED_R 10 //define red LED
#define LED_Y 8 //define yellow LED
Servo myServo;
Servo servo1;
int pos = 0;
int pos2 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_G,OUTPUT);
  pinMode(LED_R,OUTPUT);
  pinMode(LED_Y,OUTPUT);
  myServo.attach(3); //servo pin
  myServo.write(0); //servo start position
  servo1.attach(6); //servo pin
  servo1.write(0); //servo start position

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_G,HIGH); //enables the 1st set of signals
  digitalWrite(LED_R,LOW);
  digitalWrite(LED_Y,LOW);
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myServo.write(pos);  
    servo1.write(pos);// tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
  /*
  for (pos2 = 180; pos2 >= 0; pos2 -= 1) { // goes from 180 degrees to 0 degrees
    servo1.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

  */
  
  delay(5000);
  
  digitalWrite(LED_G,LOW); //enables the 1st set of signals
  digitalWrite(LED_R,LOW);
  digitalWrite(LED_Y,HIGH);

  delay(2000);

  digitalWrite(LED_G,LOW); //enables the 1st set of signals
  digitalWrite(LED_R,HIGH);
  digitalWrite(LED_Y,LOW);
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myServo.write(pos);   
    servo1.write(pos);// tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
  /*
  for (pos2 = 180; pos2 >= 0; pos2 -= 1) { // goes from 180 degrees to 0 degrees
    servo1.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

  */

  delay(5000);

  digitalWrite(LED_G,LOW); //enables the 1st set of signals
  digitalWrite(LED_R,LOW);
  digitalWrite(LED_Y,HIGH);

  delay(2000);


}

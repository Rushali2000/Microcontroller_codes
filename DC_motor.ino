int enA = 9;
int in1 = 8;
int in2 = 7;

void setup() {

    pinMode(enA, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);

    //Turn off motor A
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
}

void loop() {

//    directionControl();
//    delay(1000);
//    speedControl();
//    delay(1000);

      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      analogWrite(enA, 80);
      delay(1000);
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      analogWrite(enA, 80);
      delay(1000);
      

}
//
//void directionControl()
//{
//    //set motor to maximum speed
//    analogWrite(enA, 255);
//
//    //turn on the motor A
//    digitalWrite(in1, HIGH);
//    digitalWrite(in2, LOW);
//    delay(2000);
//
//    //chaneg the motor direction
//    digitalWrite(in1, LOW);
//    digitalWrite(in2, HIGH);
//    delay(2000);
//
//    //turn off the motor
//    digitalWrite(in1, LOW);
//    digitalWrite(in2, LOW);
//
//}
//
//void speedControl()
//{
//    //turn on motors
//    digitalWrite(in1, LOW);
//    digitalWrite(in2, HIGH);
//
//    //a9ccelerate from zero to max speed
//    for(int i = 0; i < 256; i++){
//    analogWrite(enA, i);
//    delay(20);
//    }
//
//      //decelerate from max speed to zero
//      for(int i = 255; i >= 0; i--){
//      analogWrite(enA, i);
//      delay(20);
//      }
//
//      //turn off motor a
//      digitalWrite(in1, LOW);
//      digitalWrite(in2, LOW);
//      
//    
//}

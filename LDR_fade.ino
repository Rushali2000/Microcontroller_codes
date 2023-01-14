int sensor = A0;
int output = 9;
int reading;
int bright;
int sensorValue;
int fadeAmount = 20;


void setup() {
  // put your setup code here, to run once:
  pinMode(output, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //reading = analogRead(sensor);
  bright = analogRead(sensor);
  //bright = reading/4;
  //sensorValue = analogRead(sensor);
  //bright = reading/4;
  delay(500);
  if(bright == 0){
    bright = bright + fadeAmount;
  analogWrite(output, bright);
  }
  else if(bright <= 400){
    analogWrite(output, HIGH);
    
    }
    else{
      analogWrite(output, LOW);
      }

}

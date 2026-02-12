// Motor Driver Pins
const int motorPin1 = 7; 
const int motorPin2 = 8;
const int enablePin = 9; //speed cpontrol

void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(enablePin, OUTPUT);
}

void loop() {
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  analogWrite(enablePin, 255); ]
  delay(5000); 
}

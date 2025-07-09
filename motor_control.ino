int potPin = A0;       // Potentiometer connected to A0
int motorPin = 9;      // Motor control pin (PWM)

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);          // Read potentiometer
  int pwmValue = map(potValue, 0, 1023, 0, 255); // Scale to PWM
  analogWrite(motorPin, pwmValue);            // Control motor speed
}

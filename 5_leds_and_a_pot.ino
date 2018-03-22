int sensorPin = A0;    // select the input pin for the potentiometer
int pin1 = 5;      // select the pins for the LEDs
int pin2 = 6;
int pin3 = 9;
int pin4 = 10;
int pin5 = 11;
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPins as OUTPUTs:
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  
  // turn the ledPins on
  if (170.5 <= sensorValue)
  {
    digitalWrite(pin1, HIGH);
  }
  if (341<=sensorValue)
  {
    digitalWrite(pin2, HIGH);
  }
  if (511.5<=sensorValue)
  {
  digitalWrite(pin3, HIGH);
  }
  if (682<=sensorValue)
  {
  digitalWrite(pin4, HIGH);
  }
  if (852.5<=sensorValue)
  {
  digitalWrite(pin5, HIGH);
  }
}

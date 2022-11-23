// Arduino IDE: 
// File -> Examples -> 04.Communication -> PhysicalPixel

const int led1 = 2; // pin the LEDs are attached to
const int led2 = 4; // pin the LEDs are attached to
const int led3 = 7; // pin the LEDs are attached to
const int led4 = 8; // pin the LEDs are attached to
const int led5 = 12; // pin the LEDs are attached to
const int led6 = 13; // pin the LEDs are attached to
int incomingByte;      // variable stores  serial data
int DELAY_LED= 500;

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

void loop() {
  // see if there's incoming serial data:
  if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
    // if it's a capital H (ASCII 72), turn on the LED:
    if (incomingByte == '1') {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      delay(DELAY_LED);
    }
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == '2') {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      delay(DELAY_LED);
    }
    if (incomingByte == '3') {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      delay(DELAY_LED);
    }
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == '0') {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      
      
    }
      if (incomingByte == '4') {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      delay(DELAY_LED);
    }
    if (incomingByte == '5') {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, LOW);
      delay(DELAY_LED);
    }
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == '6') {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, LOW);
      digitalWrite(led6, HIGH);
      delay(DELAY_LED);
    }
  }
}

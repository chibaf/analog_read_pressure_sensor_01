int analogPin0 = A0; // potentiometer wiper (middle terminal) connected to analog pin 3
int analogPin1 = A1; // outside leads to ground and +5V
int analogPin2 = A2;

int val0 = 0;  // variable to store the value read
int val1 = 0;  // variable to store the value read
int val2 = 0;  // variable to store the value read

void setup() {
  Serial.begin(9600);           //  setup serial
}

void loop() {
  val0 = analogRead(analogPin0);  // read the input pin
  val1 = analogRead(analogPin1);  // read the input pin
  val2 = analogRead(analogPin2);  // read the input pin
  Serial.print(val0);          // debug value
  Serial.print(",");
  Serial.print(val1);
  Serial.print(",");
  Serial.println(val2);
}

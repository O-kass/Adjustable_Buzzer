int buzzPin = 8;
int potPin = A3;
int potVal;
int buzzTime = 60;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin, OUTPUT);
pinMode(potPin, INPUT);

// Build the message dynamically
}

void loop() {

potVal = analogRead(potPin);
Serial.println(potVal);

while(potVal < 1023){
  potVal = analogRead(potPin);
  Serial.println(potVal);
  buzzTime = 60 + (potVal*9.71652);
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(buzzTime);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzTime);
  Serial.print("Buzz Time: ");
  Serial.println(buzzTime); // Print the value followed by a newline
}

}

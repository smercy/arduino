/*
Created on Jan 15 2018

@author: smercy

Replace for-loop with while-loop
removed Prompt for on and delay time to simplify the program

*/

int portPin = A0;
int pinValue;
float pinVoltage;  // actual voltage at the pin.

void setup() {
  Serial.begin(9600);
  pinMode(portPin, INPUT); // decrare pin A0 as an input
}
void loop() {
  pinValue = analogRead(portPin);
  pinVoltage = (5./1023)* pinValue;
  Serial.println(pinVoltage);
  delay(200);


}

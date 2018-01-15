/*
Created on Jan 13th 2018

@author: smercy

Replace for-loop with while-loop
removed Prompt for on and delay time to simplify the program

*/

int redLED=9; // assing pin number 9 the a redLED variable
int yellowLED=8; // assing pin number 8 the a yellowLED variable
int redOnTime = 250; //the number in milliseconds the red LED stay on
int redOffTime = 250; //the delay in milliseconds after red LED goes off
int yellowOnTime = 250; //the number in milliseconds the red LED stay on
int yelloOffTime = 250; //the delay in milliseconds after yellow LED goes off
int numRedBlink = 5; //number of times the red light blink.
int numYellowBlink = 5; //number of times the red light blink.
String redMsg = "Red LED light blinking";
String yellowMsg = "Yellow LED light blinking";
int redVoltage;
int yellowVoltage;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);

  //allow user to interact with the program

  //Red light input voltage
  Serial.println("What voltage value do you want to write to the red LED?"); //Prompt user for the number of time to blink the red light
  while(Serial.available() == 0){ } // wait for user in input , 0 means there is no data and 1 means there is data.
  redVoltage = Serial.parseInt(); // read user inout and assign to numRedBlink variable

  //Serial.println("How many miliseconds do you want the red LED to stay on?");
  //while(Serial.available()== 0){ }
  //redOnTime = Serial.parseInt();

  //Serial.println("How many miliseconds do you want to delay after the red LED goes off ");
  //while(Serial.available()== 0){ }
  //redOffTime = Serial.parseInt();



  //Yellow light block

  Serial.println("What voltage value do you want to write to the yellow LED?"); //Prompt user for the number of time to blink the yellow light
  while(Serial.available() == 0){ } // wait for user in input , 0 means there is no data and 1 means there is data.
  yellowVoltage = Serial.parseInt(); // read user inout and assign to numYellowBlink variable

  //Serial.println("How many miliseconds do you want the yellow LED to stay on?");
  //while(Serial.available()== 0){ }
  //yellowOnTime = Serial.parseInt();

  //Serial.println("How many miliseconds do you want to delay after the yellow LED goes off");
  //while(Serial.available()== 0){ }
  //yelloOffTime = Serial.parseInt();

}
 String redLedStatus = "   blinking red LED #: ";
 String yellowwLedStatus = "   blinking yellow LED #: ";
void loop() {
int j = 0;
Serial.println(redMsg);
  while (j <= 10) {
    Serial.println( redLedStatus +String(j));
    analogWrite(redLED, redVoltage);
    delay(redOnTime);
    digitalWrite(redLED, LOW);
    delay(redOffTime);
    j+=1;
  }

  Serial.println(" ");

  int i = 0;
  Serial.println(yellowMsg);
  while (i <= 20) {
  Serial.println(yellowwLedStatus + String(i));
  analogWrite(yellowLED, redVoltage);
  delay(yellowOnTime);
  digitalWrite(yellowLED, LOW);
  delay(yelloOffTime);
  i+=1;

  }

Serial.println(" ");


  // put your main code here, to run repeatedly:

}

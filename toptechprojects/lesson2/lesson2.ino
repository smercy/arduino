int redLED=9; // assing pin number 9 the a redLED variable
int yellowLED=8; // assing pin number 8 the a yellowLED variable
int redOnTime; //the number in milliseconds the red LED stay on
int redOffTime; //the delay in milliseconds after red LED goes off
int yellowOnTime; //the number in milliseconds the red LED stay on
int yelloOffTime; //the delay in milliseconds after yellow LED goes off
int numRedBlink; //number of times the red light blink. 
int numYellowBlink; //number of times the red light blink.
String redMsg = "Red LED light blinking";
String yellowMsg = "Yellow LED light blinking";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  
  //allow user to interact with the program
 
  //Red light block
  Serial.println("How many times do you want the red LED to blink?"); //Prompt user for the number of time to blink the red light
  while(Serial.available() == 0){ } // wait for user in input , 0 means there is no data and 1 means there is data.
  numRedBlink = Serial.parseInt(); // read user inout and assign to numRedBlink variable

  Serial.println("How many miliseconds do you want the red LED to stay on?");
  while(Serial.available()== 0){ }
  redOnTime = Serial.parseInt();
  
  Serial.println("How many miliseconds do you want to delay after the red LED goes off ");
  while(Serial.available()== 0){ }
  redOffTime = Serial.parseInt();

  

  //Yellow light block
  
  Serial.println("How many times do you want the yellow LED to blink?"); //Prompt user for the number of time to blink the yellow light
  while(Serial.available() == 0){ } // wait for user in input , 0 means there is no data and 1 means there is data.
  numYellowBlink = Serial.parseInt(); // read user inout and assign to numYellowBlink variable

  Serial.println("How many miliseconds do you want the yellow LED to stay on?");
  while(Serial.available()== 0){ }
  yellowOnTime = Serial.parseInt();

  Serial.println("How many miliseconds do you want to delay after the yellow LED goes off");
  while(Serial.available()== 0){ }
  yelloOffTime = Serial.parseInt();

}
 String redLedStatus = "   blinking red LED #: ";
 String yellowwLedStatus = "   blinking yellow LED #: ";
void loop() {
Serial.println(redMsg);
  for (int j=1; j<=numRedBlink; j++){
    Serial.println( redLedStatus +String(j));
    digitalWrite(redLED, HIGH);
    delay(redOnTime);
    digitalWrite(redLED, LOW);
    delay(redOffTime);
  }
  
  Serial.println(" ");
  
  Serial.println(yellowMsg);
  for (int j=1; j<=numYellowBlink; j++){
  Serial.println(yellowwLedStatus + String(j));
  digitalWrite(yellowLED, HIGH);
  delay(yellowOnTime);
  digitalWrite(yellowLED, LOW);
  delay(yelloOffTime);
  }

Serial.println(" ");

  
  // put your main code here, to run repeatedly:

}

/*

Created on Jan 13th 2018

@author: smercy

*/

void setup() {
  Serial.begin(115200);

}

void loop() {
  int j = 1;
   while (j<=10) {
     print(j);
     j+=1;
   }


}

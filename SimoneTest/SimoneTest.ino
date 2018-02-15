/*
   Author: Lee Lerner at Uncorked Studios
   Date: January 20th 2018
   Name: Simone
   About: Test software to be used during build for Simone game for troubleshooting purposes
   Use: When wired properly, each button should light up when pressed
   When all buttons lit, SimoneGame.ino is ready to be uploaded
*/

//test stuff
int inPin7 = 7;
int inPin6 = 6;
int inPin5 = 5;
int inPin4 = 4;
int val7 = 0;
int val6 = 0;
int val5 = 0;
int val4 = 0;

void setup() {

  //pinout initializations
  pinMode(inPin7, INPUT);
  pinMode(inPin6, INPUT);
  pinMode(inPin5, INPUT);
  pinMode(inPin4, INPUT);

  pinMode(11, OUTPUT);
  digitalWrite(11, LOW);
  pinMode(10, OUTPUT);
  digitalWrite(10, LOW);
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW);
  pinMode(8, OUTPUT);
  digitalWrite(8, LOW);

}

void loop() {

  val7 = digitalRead(inPin7);
  if (val7 == HIGH) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }

  val6 = digitalRead(inPin6);
  if (val6 == HIGH) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }

  val5 = digitalRead(inPin5);
  if (val5 == HIGH) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }

  val4 = digitalRead(inPin4);
  if (val4 == HIGH) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);
  }

}

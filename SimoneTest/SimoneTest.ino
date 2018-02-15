/*
   Author: Lee Lerner at Uncorked Studios
   Date: January 20th 2018
   Name: Simone
   About: Test software to be used during build for Simone game for troubleshooting purposes
   Use: When wired properly, each button should light up when pressed
   When all buttons lit, SimoneGame.ino is ready to be uploaded


   Copyright (C) 2018  Uncorked Studios lee@uncorkedstudios.com

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
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

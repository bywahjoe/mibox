/*
  Firmansyah Wahyu @2023
  CODE: https://github.com/bywahjoe/mibox
*/

#include "pinku.h"
#define button1 digitalRead(btn1)
#define button2 digitalRead(btn2)
#define button3 digitalRead(btn3)
#define button4 digitalRead(btn4)
#define button5 digitalRead(btn5)
#define button6 digitalRead(btn6)
#define button7 digitalRead(btn7)
#define button8 digitalRead(btn8)

String view[9] = {"MiBox STARTING", "KUBUS", "BALOK", "PRISMA SEGITIGA", "TABUNG", "BOLA", "KERUCUT", "LIMAS SEGITIGA", "LIMAS SEGIEMPAT"};
int setDelay = 3000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  play(0);
  
  pinMode(btn1, INPUT_PULLUP);
  pinMode(btn2, INPUT_PULLUP);
  pinMode(btn3, INPUT_PULLUP);
  pinMode(btn4, INPUT_PULLUP);
  pinMode(btn5, INPUT_PULLUP);
  pinMode(btn6, INPUT_PULLUP);
  pinMode(btn7, INPUT_PULLUP);
  pinMode(btn8, INPUT_PULLUP);

  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //-->Debug
  //Serial.print("DEBUG:");
  //Serial.print(!button1);Serial.print(!button2);Serial.print(!button3);Serial.print(!button4);
  //Serial.print(!button5);Serial.print(!button6);Serial.print(!button7);Serial.println(!button8);

  if (!button1) {
    play(1);
    delay(setDelay);
  }
  if (!button2) {
    play(2);
    delay(setDelay);
  }
  if (!button3) {
    play(3);
    delay(setDelay);
  }
  if (!button4) {
    play(4);
    delay(setDelay);
  }
  if (!button5) {
    play(5);
    delay(setDelay);
  }
  if (!button6) {
    play(6);
    delay(setDelay);
  }
  if (!button7) {
    play(7);
    delay(setDelay);
  }
  if (!button8) {
    play(8);
    delay(setDelay);
  }
}
void play(int number) {
  
  Serial.print("BUTTON PRESS:"); Serial.println(number);
  Serial.print("PLAYING     :"); Serial.println(view[number]);
  if(number==0){
    //Play Starting
    }
  else{
    //Play Music
    }
}

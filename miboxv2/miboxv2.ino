/*
  Firmansyah Wahyu @2023
  CODE: https://github.com/bywahjoe/mibox
*/
#include <SoftwareSerial.h>
#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"
#include "pinku.h"

DFRobotDFPlayerMini mp3;
SoftwareSerial mySerial(myRX, myTX);

#define button1 digitalRead(btn1)
#define button2 digitalRead(btn2)
#define button3 digitalRead(btn3)
#define button4 digitalRead(btn4)
#define button5 digitalRead(btn5)
#define button6 digitalRead(btn6)
#define button7 digitalRead(btn7)
#define button8 digitalRead(btn8)

String view[9] = {
  "MiBox STARTING",     //9
  "PERSEGI",            //1
  "PERSEGI PANJANG",    //2
  "BELAH KETUPAT",      //3 
  "LAYANG LAYANG",      //4
  "SEGITIGA SAMA SISI", //5
  "TRAPESIUM SAMA KAKI",//6
  "JAJAR GENJANG",      //7
  "LINGKARAN"           //8
  };

//Setting
int setDelay = 3000;
int setVolume = 30; //0-30

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);
  mp3.begin(mySerial,true,true);
  mp3.volume(setVolume);
  
  delay(500);
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
//  while(1);
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
  mp3.stop();
  
  Serial.print("BUTTON PRESS:"); Serial.println(number);
  Serial.print("PLAYING     :"); Serial.println(view[number]);
  if(number==0){
    //Play Starting
    mp3.play(9);
    }
  else{
    //Play Music
    mp3.play(number);
    }
}

#include "head.h"

void setup() {
    // put your setup code here, to run once:
    sensorserv.attach(sensorservpin);

    pinMode(s2, OUTPUT);
    pinMode(s3, OUTPUT);
    pinMode(out, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int blackleft;
 int blackright;
 int blackforward;

  sensorLeft();
  if(getRed() + getBlue() + getGreen() < 40){
    blackleft = 1;
  }
  else blackleft = 0;
  sensorForward();
  if (getRed() + getBlue() + getGreen() < 40){
    blackforward = 1;
  }
    else blackforward = 0;
    sensorRight ();
    if (getRed() + getBlue() + getGreen() < 40){
      blackright = 1;
  }

}


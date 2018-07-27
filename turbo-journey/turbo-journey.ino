#include "head.h"

Servo sensorserv;

int blackleft;
int blackright;
int blackforward;

int greenleft;
int greenright;
int greenforward;

void setup() {
    // put your setup code here, to run once:
    sensorserv.attach(sensorservpin);

    pinMode(s2, OUTPUT);
    pinMode(s3, OUTPUT);
    pinMode(out, INPUT);

    sensorForward();
    delay(10000); //10 seconds of delay
}

void loop() {
    // put your main code here, to run repeatedly:

    takeColorInput();

    pathfind();

}


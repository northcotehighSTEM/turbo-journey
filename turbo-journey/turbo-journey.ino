#include "head.h"

Servo sensorserv;
Servo grabbyserv;

int blackleft;
int blackright;
int blackforward;

int greenleft;
int greenright;
int greenforward;

void setup() {
    // put your setup code here, to run once:
    sensorserv.attach(sensorservpin);
    grabbyserv.attach(grabbyservpin);

    pinMode(s2, OUTPUT);
    pinMode(s3, OUTPUT);
    pinMode(out, INPUT);

    Serial.begin(9600);

    /*goForward();
    delay(3000);
    goLeft();
    delay(3000);
    goRight();
    delay(3000);*/
    brakes();

    sensorForward();
    delay(5000);
}

void loop() {
    // put your main code here, to run repeatedly:

    takeColorInput();

    pathfind();

}


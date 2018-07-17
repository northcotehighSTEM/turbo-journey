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

    int greenleft;
    int greenright;
    int greenforward;

    sensorLeft();
    if(getRed() + getBlue() + getGreen() < 40){
        blackleft = 1;
    }
    else
        blackleft = 0;
    if(2 * getGreen() - getRed() - getBlue() > 50)
        greenleft = 1;
    else
        greenleft = 0;

    sensorForward();
    if (getRed() + getBlue() + getGreen() < 40){
        blackforward = 1;
    }
    else blackforward = 0;
     if(2 * getGreen() - getRed() - getBlue() > 50)
        greenforward = 1;
    else
        greenforward = 0;

    sensorRight ();
    if (getRed() + getBlue() + getGreen() < 40){
        blackright = 1;
    }
     if(2 * getGreen() - getRed() - getBlue() > 50)
        greenright = 1;
    else
        greenright = 0;

    //We want to follow a green marker if there is one
    //Otherwise follow a black line if possible

    //First look for a green marker and follow it
    if(greenforward){
        goForward();
    }
     else if(greenleft){
        goLeft()
    }
    else if(greenright){
        goRight();
    }
    //if no green marker was found, try looking for a black line
    else if(blackforward){
        goForward();
    }
    else if(blackleft){
        goLeft()
    }
    else if(blackright){
        goRight();
    }
    //If we can't find either the line or a green marker, we've lost the line and we need to find it again
    else
        //The robot is fairly big, so we'll probably find the line just by going in a circle
        goRight();
    }

}


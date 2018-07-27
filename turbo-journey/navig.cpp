#include "head.h"

void takeColorInput(){
    sensorLeft();
    if(getRed() + getBlue() + getGreen() < 3 * blackthres){
        blackleft = 1;
    }
    else
        blackleft = 0;
    if(2 * getGreen() / (getRed() + getBlue())> 2 * greenthres)
        greenleft = 1;
    else
        greenleft = 0;

    sensorForward();
    if (getRed() + getBlue() + getGreen() < 3 * blackthres){
        blackforward = 1;
    }
    else blackforward = 0;
     if(2 * getGreen() / (getRed() + getBlue()) > 2 * greenthres)
        greenforward = 1;
    else
        greenforward = 0;

    sensorRight ();
    if (getRed() + getBlue() + getGreen() < 3 * blackthres){
        blackright = 1;
    }
    else
        blackright = 0;

    if(2 * getGreen() / (getRed() + getBlue()) > 2 * greenthres)
        greenright = 1;
    else
        greenright = 0;

    //delay(1000);

}

void pathfind(){
    //We want to follow a green marker if there is one
    //Otherwise follow a black line if possible

    //First look for a green marker and follow it
    if(greenforward){
        goForward();
        Serial.println("Following green marker forward");
        delay(motordelay);
    }
     else if(greenleft){
        goLeft();
        Serial.println("Following green marker left");
        delay(greendelay);
    }
    else if(greenright){
        goRight();
        Serial.println("Following green marker right");
        delay(greendelay);
    }
    //if no green marker was found, try looking for a black line
    else if(blackforward){
        goForward();
        Serial.println("Following black line forward");
        delay(motordelay);
    }
    else if(blackleft){
        goLeft();
        Serial.println("Following black line left");
        delay(turndelay);
    }
    else if(blackright){
        goRight();
        Serial.println("Following black line right");
        delay(turndelay);
    }
    //If we can't find either the line or a green marker, we've lost the line and we need to find it again
    else{
        //The robot is fairly big, so we'll probably find the line just by going in a circle
        //goRight();

        //might be a break in the line so go forward
        goForward();
        Serial.println("Lost line");
        delay(motordelay);
    }

    brakes();
}

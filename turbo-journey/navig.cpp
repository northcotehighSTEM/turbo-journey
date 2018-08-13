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

    if(greenleft && greenright)
        goForwatd();
    else if(greenleft){
        goLeft();
        Serial.println("Following green marker left");

    }
    else if(greenright){
        goRight();
        Serial.println("Following green marker right");
        }
    //if no green marker was found, try looking for a black line
    else if(blackleft && blackright){
        goForward();
        Serial.println("Both sensors over line");
    }
    else if(blackleft){
        goLeft();
        Serial.println("Following black line left");
    }
    else if(blackright){
        goRight();
        Serial.println("Following black line right");
    }
    //If we can't find either the line or a green marker, we've lost the line and we need to find it again
    else{
        //The robot is fairly big, so we'll probably find the line just by going in a circle
        //goRight();

        //might be a break in the line so go forward
        goForward();
        Serial.println("Lost line");
    }

    brakes();
}

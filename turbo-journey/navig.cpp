#include "head.h"

void takeColorInput(){
    sensorLeft();
    if(getRed() + getBlue() + getGreen() < 3 * blackthres){
        blackleft = 1;
    }
    else
        blackleft = 0;
    if(2 * getGreen() - getRed() - getBlue() > 2 * greenthres)
        greenleft = 1;
    else
        greenleft = 0;
    delay(50);

    sensorForward();
    if (getRed() + getBlue() + getGreen() < 40){
        blackforward = 1;
    }
    else blackforward = 0;
     if(2 * getGreen() - getRed() - getBlue() > 50)
        greenforward = 1;
    else
        greenforward = 0;
    delay(50);

    sensorRight ();
    if (getRed() + getBlue() + getGreen() < 40){
        blackright = 1;
    }
     if(2 * getGreen() - getRed() - getBlue() > 50)
        greenright = 1;
    else
        greenright = 0;
    delay(50);
}

void pathfind(){
    //We want to follow a green marker if there is one
    //Otherwise follow a black line if possible

    //First look for a green marker and follow it
    if(greenforward){
        goForward();
    }
     else if(greenleft){
        goLeft();
    }
    else if(greenright){
        goRight();
    }
    //if no green marker was found, try looking for a black line
    else if(blackforward){
        goForward();
    }
    else if(blackleft){
        goLeft();
    }
    else if(blackright){
        goRight();
    }
    //If we can't find either the line or a green marker, we've lost the line and we need to find it again
    else
        //The robot is fairly big, so we'll probably find the line just by going in a circle
        goRight();
}

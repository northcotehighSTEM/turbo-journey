#include "head.h"

int out = out1;

void sensorLeft(void){
    out = out1;
}

void sensorRight(){
    out = out2;
}

double getRed(void){
    //set sensor to red mode
    digitalWrite (s2,LOW);
    digitalWrite (s3,LOW);


    //measure sensor output
    long pulse = pulseIn(out, HIGH);

    pulse = rscale/pulse;

    return (double)pulse;

}

double getBlue(void){
    //set sensor to blue mode
    digitalWrite (s2,LOW);
    digitalWrite (s3,HIGH);

    //measure sensor output
    long pulse = pulseIn(out, HIGH);

    pulse = bscale/pulse;

    return (double)pulse;
}

double getGreen(void){
    //set sensor to green mode
    digitalWrite (s2,HIGH);
    digitalWrite (s3,HIGH);

    //measure sensor output
    long pulse = pulseIn(out, HIGH);

    pulse = gscale/pulse;

    return (double)pulse;
}


double getDistance(){

  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);
  double duration = (double)pulseIn(echo, HIGH);

  duration = duration / 2;
  duration = duration / 1000000; // One million

  double distance = speedofsound * duration;
  //This is distance in metres

  return distance;

 }

void waterTower(){
    sensorserv.write(90 + 60);
    while(getDistance() < 0.15){
        goLeft();
    }
    brakes();
    while(!blackright){
        if(getDistance() < 0.15)
            goForward();
        else
            goRight();
    }
    brakes();
    sensorserv.write(90);

}

void grab(){
    //Will write after second servo installed
}

void rescue(){
    brakes();
    int angle;
    for(angle = 0; angle < 180; angle++){
        sensorserv.write(angle);
        if(getDistance() < 0.7)
            break;
        delay(10);
    }
    while(abs(angle - 90) > 6){
        if(angle < 90){
            angle += 5;
            sensorserv.write(angle);
            goLeft();
        }
        else{
            angle -= 5;
            sensorserv.write(angle);
            goRight();
        }

        while(getDistance() > 0.75)
            delay(4);

        brakes();
    }

    sensorserv.write(90);
    if(angle < 90)
            goLeft();
        else
            goRight();

    while(getDistance() > 0.75)
        delay(4);

        brakes();

    while(getDistance() < 0.05)
        goForward();
    brakes();
    grabbyserv.write(180);
    delay(500);
    goForward();
    delay(4000);
    brakes();
    grabbyserv.write(0);
}


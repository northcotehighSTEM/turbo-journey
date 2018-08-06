#include "head.h"

void sensorLeft(void){
    sensorserv.write(60);
    delay(sensordelay);
}

void sensorRight(){
    sensorserv.write(120);
    delay(sensordelay);
}

void sensorForward(void){
    sensorserv.write(90);
    delay(sensordelay);
}

void red(void){
    //set sensor to red mode
    digitalWrite (s2,LOW);
    digitalWrite (s3,LOW);

}

void blue(void){
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

  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
  double duration = (double)pulseIn(echoPin, HIGH);

  duration = duration / 2;
  duration = duration / 1000000; // One million

  double distance = speedofsound * duration;
  //This is distance in metres

  return distance;

 }

void waterTower(){
    sensorserv.write(135);
    while(getDistance() < 0.2){
        goLeft();
    }
    brakes():

}


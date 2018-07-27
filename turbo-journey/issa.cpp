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


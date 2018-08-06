#include "head.h"

int out = out1;

void sensorLeft(void){
    out = out1;
}

void sensorRight{(){
    out = out2;
}

void red(void){
    //set sensor to red mode
    digitalWrite (s2,LOW);
    digitalWrite (s3,LOW);


    //measure sensor output
    long pulse = pulseIn(out, HIGH);

    pulse = rscale/pulse;

    return (double)pulse;

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


#include <Servo.h>

//PIn Assignments

//Sensor mount servo
int sensorservpin = 3;

//colour sensor
int s2 = 5;
int s3 = 6;
int out = 7;

//pins for motors
int in1 = 10;
int in2 = 11;
int in3 = 12;
int in4 = 13;

Servo sensorserv;

//constants to callibrate colour sensor
const double rscale = 3000.0;
const double gscale = 3500.0;
const double bscale = 2500.0;

const int blackthres = 13;
const int greenthres = 25;

void sensorLeft(void); //done but untested
void sensorRight(void); //done but untested
void sensorForward(void); //done but untested
double getRed(void); //done but untested
double getBlue(void); //done but untested
double getGreen(void); //done but untested
void goForward(void); //Banjo is writing
void goLeft(void); //Banjo is writing
void goRight(void); //Banjo is writing


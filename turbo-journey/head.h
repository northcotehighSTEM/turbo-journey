#include <Servo.h>
#include <Arduino.h>

//Pin Assignments

//Sensor mount servo
const int sensorservpin = 3;

//colour sensor
const int s2 = 5;
const int s3 = 6;
const int out = 7;

//pins for motors
const int in1 = 10;
const int in2 = 11;
const int in3 = 12;
const int in4 = 13;

extern Servo sensorserv;

//constants to callibrate colour sensor
const double rscale = 3000.0;
const double gscale = 3500.0;
const double bscale = 2500.0;

const int blackthres = 13;
const int greenthres = 25;

//function prototypes
void sensorLeft(void); //done but untested
void sensorRight(void); //done but untested
void sensorForward(void); //done but untested
double getRed(void); //done but untested
double getBlue(void); //done but untested
double getGreen(void); //done but untested
void goForward(void); //Banjo is writing
void goLeft(void); //Banjo is writing
void goRight(void); //Banjo is writing

void takeColorInput(void);
void pathfind(void);

//global variables
extern int blackleft;
extern int blackright;
extern int blackforward;

extern int greenleft;
extern int greenright;
extern int greenforward;

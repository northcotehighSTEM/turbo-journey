#include <Servo.h>
#include <Arduino.h>

//Pin Assignments

//Sensor mount servo
const int sensorservpin = 3;

//colour sensor
const int s2 = 5;
const int s3 = 6;
const int out1 = 7;
const int out2 =  8;
extern int out;
//pins for motors
const int in1 = 13;
const int in2 = 12 ;
const int in3 = 11;
const int in4 = 10;

extern Servo sensorserv;

//constants to callibrate colour sensor
const double rscale = 3000.0;
const double gscale = 3500.0;
const double bscale = 2500.0;

const double blackthres = 50.0;
const double greenthres = 0.7;

const int sensordelay = 150;
**
//function prototypes
void sensorLeft(void); //done but untested
void sensorRight(void); //done but untested
double getRed(void); //done but untested
double getBlue(void); //done but untested
double getGreen(void); //done but untested
void goForward(void); //Banjo is writing
void goLeft(void); //Banjo is writing
void goRight(void); //Banjo is writing
void brakes(void);

void takeColorInput(void);
void pathfind(void);

//global variables
extern int blackleft;
extern int blackright;
extern int blackforward;

extern int greenleft;
extern int greenright;
extern int greenforward;

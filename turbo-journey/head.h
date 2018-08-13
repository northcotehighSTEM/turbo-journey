#include <Servo.h>
#include <Arduino.h>

//Pin Assignments

//distance sensor
const int trig = 0;
const int echo = 1;

//Sensor mount servo
const int sensorservpin = 3;

//colour sensor
const int s2 = 5;
const int s3 = 6;
const int out1 = 7;
const int out2 =  8;
extern int out;

//grabbing servo
const int grabbyservpin = 9;

//pins for motors
const int in1 = 13;
const int in2 = 12 ;
const int in3 = 11;
const int in4 = 10;

extern Servo sensorserv;
extern Servo grabbyserv;

//constants to callibrate colour sensor
const double rscale = 3000.0;
const double gscale = 3500.0;
const double bscale = 2500.0;

const double blackthres = 80.0;
const double greenthres = 0.7;

const double speedofsound = 343.0; //double is a variable type that allows decimals

const int sensordelay = 150;

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

void watertower();
void rescue();

//global variables
extern int blackleft;
extern int blackright;
extern int blackforward;

extern int greenleft;
extern int greenright;
extern int greenforward;

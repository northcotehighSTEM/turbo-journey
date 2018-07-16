#include <Servo.h>

//pins
int sensorservpin = 3;
Servo sensorserv;

int s2 = 5;
int s3 = 6;
int out = 7;


double rscale = 3000.0
double gscale = 3500.0
double bscale = 2500.0



void sensorLeft(void); //done but untested
void sensorRight(void); //done but untested
void sensorForward(void); //done but untested
double getRed(void);
double getBlue(void);
double getGreen(void);
void goForward(void); //Banjo is writing
void goLeft(void); //Banjo is writing
void goRight(void); //Banjo is writing


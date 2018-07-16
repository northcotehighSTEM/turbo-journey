
int s2 = 5;
int s3 = 6;
int out = 7;
double rscale = 3000.0
double gscale = 3500.0
double bscale = 2500.0

void sensorLeft(void);
void sensorRight(void);
void sensorForward    (void);
double getRed(void);
double getBlue(void);
double getGreen(void);

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}


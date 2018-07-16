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
  void goForward(){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
  }
  void goLeft(void){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
  }
  void goRight(void){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
  }

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int blackleft;
 int blackright;
 int blackforward;

  sensorLeft();
  if(getRed() + getBlue() + getGreen() < 40){
    blackleft = 1;
  }
  else blackleft = 0;
  sensorForward();
  if (getRed() + getBlue() + getGreen() < 40){
    blackforward = 1;
  }
    else blackforward = 0;
    sensorRight ();
    if (getRed() + getBlue() + getGreen() < 40){
      blackright = 1;
  }

}

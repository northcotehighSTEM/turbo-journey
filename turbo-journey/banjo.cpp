#include "head.h"

  void goForward(){
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
  }
  void goLeft(void){
      digitalWrite(in1, LOW);
      if(rand() % 3)
        digitalWrite(in2, HIGH);
      else
        digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
  }
  void goRight(void){
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      if(rand() % 3)
        digitalWrite(in4, HIGH);
      else
        digitalWrite(in4, LOW);
  }

  void brakes(void){
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
  }



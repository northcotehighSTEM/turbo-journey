#include "head.h"

  void goForward(){
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
  }
  void goLeft(void){
      digitalWrite(in1, LOW);
      if(rand() % 2)
        digitalWrite(in2, LOW);
      else
        digitalWrite(in2, HIGH);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
  }
  void goRight(void){
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      if(rand() % 2)
        digitalWrite(in4, LOW);
      else
        digitalWrite(in4, HIGH);
  }

  void brakes(void){
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
  }



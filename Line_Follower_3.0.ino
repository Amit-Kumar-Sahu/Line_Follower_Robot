#include <AFMotor.h>

AF_DCMotor motor1(2);
AF_DCMotor motor2(4);



void setup()
{
  Serial.begin(9600);

 motor1.setSpeed(255);
 motor1.run(RELEASE);

 motor2.setSpeed(255);
 motor2.run(RELEASE);

 
pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(A2, INPUT);

}
  

void loop()

{
  
  int right = digitalRead(A0);
  int centre = digitalRead(A1);
  int left = digitalRead(A2);
  

     if(left == 0 && right == 0 && centre == 1)
     {
        motor1.run(BACKWARD);
        motor2.run(BACKWARD); 
     }
     else if(left == 1 && right == 0 && centre == 1)
     {
        motor1.run(BACKWARD); 
        motor2.run(FORWARD); 
      }

     else if(left == 1 && right == 0 && centre == 0)
     {
        motor1.run(BACKWARD); 
        motor2.run(FORWARD); 
      }
      else if(left == 1 && right == 1 && centre == 0)
     {
        motor1.run(FORWARD); 
        motor2.run(FORWARD); 
      }
      else if(left == 0 && right == 1 && centre == 1)
      {
         motor1.run(FORWARD); 
         motor2.run(BACKWARD);   
       }
      else if(left == 0 && right == 1 && centre == 0)
      {
         motor1.run(FORWARD); 
         motor2.run(BACKWARD);   
      }
       /*if(left == 0 && right == 0 && centre == 0)
       {
         motor1.run(RELEASE); 
         motor2.run(RELEASE);   
       }*/
       else if(left == 1 && right == 1 && centre == 1)
      {
         motor1.run(RELEASE); 
         motor2.run(RELEASE);   
      }

}

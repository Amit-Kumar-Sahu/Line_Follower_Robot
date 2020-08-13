#include <AFMotor.h>

AF_DCMotor motor1(2);
AF_DCMotor motor2(3);



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
pinMode(A3, INPUT);
pinMode(A4, INPUT);

}
  

void loop()

{
  
  int right_corner = digitalRead(A0);
  int right = digitalRead(A1);
  int centre = digitalRead(A2);
  int left = digitalRead(A3);
  int left_corner = digitalRead(A4);
  

     if(left_corner == 0 && left == 0 && centre == 1 && right == 0 && right_corner == 0)
     {
        motor1.run(BACKWARD);
        motor2.run(BACKWARD); 
     }
     else if(left_corner == 1 && left == 1 && centre == 1 && right == 1 && right_corner == 0)
     {
        motor1.run(BACKWARD); 
        motor2.run(FORWARD); 
      }
     else if(left_corner == 1 && left == 1 && centre == 1 && right == 0 && right_corner == 0)
     {
        motor1.run(BACKWARD); 
        motor2.run(FORWARD); 
      }

     else if(left_corner == 1 && left == 1 && centre == 0 && right == 0 && right_corner == 0)
     {
        motor1.run(BACKWARD); 
        motor2.run(FORWARD); 
      }
      else if(left_corner == 1 && left == 0 && centre == 0 && right == 0 && right_corner == 0)
     {
        motor1.run(BACKWARD); 
        motor2.run(FORWARD); 
      }
      else if(left_corner == 0 && left == 1 && centre == 0 && right == 0 && right_corner == 0)
     {
        motor1.run(BACKWARD); 
        motor2.run(FORWARD);
     }  
      else if(left_corner == 1 && left == 0 && centre == 1 && right == 0 && right_corner == 0)
     {
        motor1.run(BACKWARD); 
        motor2.run(FORWARD);  
      }
      else if(left_corner == 0 && left == 1 && centre == 1 && right == 0 && right_corner == 0)
     {
        motor1.run(BACKWARD); 
        motor2.run(FORWARD);  
      }
      else if(left_corner == 0 && left == 1 && centre == 1 && right == 1 && right_corner == 1)
      {    
         motor1.run(FORWARD); 
         motor2.run(BACKWARD);   
       }
      else if(left_corner == 0 && left == 0 && centre == 1 && right == 1 && right_corner == 1)
      {    
         motor1.run(FORWARD); 
         motor2.run(BACKWARD);   
       }
      else if(left_corner == 0 && left == 0 && centre == 0 && right == 1 && right_corner == 1)
      {
         motor1.run(FORWARD); 
         motor2.run(BACKWARD);   
      }
      else if(left_corner == 0 && left == 0 && centre == 0 && right == 1 && right_corner == 0)
      {
         motor1.run(FORWARD); 
         motor2.run(BACKWARD);   
      }
       
       else if(left_corner == 0 && left == 0 && centre == 0 && right == 0 && right_corner == 1)
      {
         motor1.run(FORWARD); 
         motor2.run(BACKWARD);   
      }
      else if(left_corner == 0 && left == 0 && centre == 1 && right == 1 && right_corner == 0)
      {
         motor1.run(FORWARD); 
         motor2.run(BACKWARD);   
      }
      else if(left_corner == 0 && left == 0 && centre == 1 && right == 0 && right_corner == 1)
      {
         motor1.run(FORWARD); 
         motor2.run(BACKWARD);   
      }
       
       else if(left_corner == 0 && left == 0 && centre == 0 && right == 0 && right_corner == 0)
      {
         motor1.run(BACKWARD); 
         motor2.run(BACKWARD);   
      }
      
       
       else if(left_corner == 1 && left == 1 && centre == 1 && right == 1 && right_corner == 1)
      {
         motor1.run(RELEASE); 
         motor2.run(RELEASE);   
      }

}

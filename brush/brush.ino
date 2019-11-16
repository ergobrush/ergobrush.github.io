#include <Servo.h> 
Servo s0; 
Servo s1; 
Servo s2; 

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  s0.attach(A0);
  s1.attach(A1);
  s2.attach(A2); 
}


 //Position 1
  s0.write(angle);
  s1.write(angle);
  s1.write(angle);
  delay(1000);


  
 //Position 2
  s0.write(angle);
  s1.write(angle);
  s1.write(angle);
  delay(1000);


   //Position 3
  s0.write(angle);
  s1.write(angle);
  s1.write(angle);
  delay(1000);


   //Position 4
  s0.write(angle);
  s1.write(angle);
  s1.write(angle);
  delay(1000);


  




  
  

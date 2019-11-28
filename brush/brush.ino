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
void loop(){
 //Position 1
  s0.write(100);
  s1.write(170);
  s2.write(100);
  delay(5000);



  
 //Position 2
  s0.write(75);
  s1.write(180);
  s2.write(10);
  delay(5000);


   //Position 3
  s0.write(125);
  s1.write(180);
  s2.write(10);
  delay(5000);


   //Position 4
  s0.write(125);
  s1.write(0);
  s2.write(0);
  delay(5000);


    //postion 5
  s0.write(75);
  s1.write(0);
  s2.write(0);
  delay(5000);

}




  
  

#include<Servo.h>
Servo Myservo[8];
void setup()
{
  Myservo[0].attach(3);
  Myservo[1].attach(5);
  Myservo[2].attach(7);
  Myservo[3].attach(9);
  Myservo[4].attach(2);
  Myservo[5].attach(4);
  Myservo[6].attach(6);
  Myservo[7].attach(8);
  Myservo[0].write(90);
  Myservo[1].write(90);
  Myservo[2].write(115);
  Myservo[3].write(110);
  Myservo[4].write(90);
  Myservo[5].write(75);
  Myservo[6].write(75);
  Myservo[7].write(90);
}
void loop()
{
}

#include<Servo.h>
Servo Myservo1;
void setup()
{
  Myservo1.attach(3);
}
void loop()
{
  Myservo1.write(0);
  delay(15);
}

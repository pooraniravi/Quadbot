#include<Servo.h>
Servo Myservo[8];
void setup()
{
  Myservo[0].attach(3);
  Myservo[1].attach(4);
  Myservo[2].attach(7);
  Myservo[3].attach(9);
  Myservo[4].attach(2);
  Myservo[5].attach(5);
  Myservo[6].attach(6);
  Myservo[7].attach(8);
  Myservo[0].write(90);
  Myservo[1].write(90);
  Myservo[2].write(90);
  Myservo[3].write(90);
  Myservo[4].write(90);
  Myservo[5].write(90);
  Myservo[6].write(90);
  Myservo[7].write(90);
  Serial.begin(9600);
}
void loop()
{
  
            if(Serial.available())
{
               char x=Serial.read();
  
                      
              if (x=='A')
              {
                
                    for(int i=0;i<30;i++)
{
 Myservo[0].write(Myservo[0].read()+1);
 Myservo[2].write(Myservo[2].read()+1);
 delay(5);
}
for(int i=0;i<30;i++)
{
  Myservo[4].write(Myservo[4].read()-1);
  Myservo[6].write(Myservo[6].read()+1);
  delay(5);
}
  for (int i=0;i<30;i++)
  {
    
  Myservo[0].write(Myservo[0].read()-1);
  Myservo[2].write(Myservo[2].read()-1);
  delay(5);
  }
  
  for (int i=0;i<30;i++)
  {
    Myservo[4].write(Myservo[4].read()+1);
    Myservo[6].write(Myservo[6].read()-1);
    Myservo[1].write(Myservo[1].read()-1);
    Myservo[3].write(Myservo[3].read()-1);
    delay(5);
  }
  for(int i=0;i<30;i++)
  {
    Myservo[5].write(Myservo[5].read()-1);
    Myservo[7].write(Myservo[7].read()+1);
    delay(5);
  }
  for(int i=0;i<30;i++)
  {
    Myservo[1].write(Myservo[1].read()+1);
    Myservo[3].write(Myservo[3].read()+1);
    delay(5);
  }
  for(int i=0;i<30;i++)
  {
    Myservo[5].write(Myservo[5].read()+1);
    Myservo[7].write(Myservo[7].read()-1);
    delay(5);
  }
  }
  
  else if(x=='B')
  {
   
  
       
                    for(int i=0;i<30;i++)
{
 Myservo[0].write(Myservo[0].read()+1);
 Myservo[2].write(Myservo[2].read()+1);
 delay(5);
}
for(int i=0;i<30;i++)
{
  Myservo[4].write(Myservo[4].read()+1);
  Myservo[6].write(Myservo[6].read()-1);
  delay(5);
}
  for (int i=0;i<30;i++)
  {
    
  Myservo[0].write(Myservo[0].read()-1);
  Myservo[2].write(Myservo[2].read()-1);
  delay(5);
  }
  
  for (int i=0;i<30;i++)
  {
    Myservo[4].write(Myservo[4].read()-1);
    Myservo[6].write(Myservo[6].read()+1);
    Myservo[1].write(Myservo[1].read()-1);
    Myservo[3].write(Myservo[3].read()-1);
    delay(5);
  }
  for(int i=0;i<30;i++)
  {
    Myservo[5].write(Myservo[5].read()+1);
    Myservo[7].write(Myservo[7].read()-1);
    delay(5);
  }
  for(int i=0;i<30;i++)
  {
    Myservo[1].write(Myservo[1].read()+1);
    Myservo[3].write(Myservo[3].read()+1);
    delay(5);
  }
  for(int i=0;i<30;i++)
  {
    Myservo[5].write(Myservo[5].read()-1);
    Myservo[7].write(Myservo[7].read()+1);
    delay(5);
  }
  }
  else if(x=='D')
  {
     for(int i=0;i<30;i++)
{
 Myservo[0].write(Myservo[0].read()+1);
 Myservo[2].write(Myservo[2].read()+1);
 delay(5);
}
for(int i=0;i<30;i++)
{
  Myservo[4].write(Myservo[4].read()+1);
  Myservo[6].write(Myservo[6].read()+1);
  delay(5);
}
  for (int i=0;i<30;i++)
  {
    
  Myservo[0].write(Myservo[0].read()-1);
  Myservo[2].write(Myservo[2].read()-1);
  delay(5);
  }
  
  for (int i=0;i<30;i++)
  {
    Myservo[4].write(Myservo[4].read()-1);
    Myservo[6].write(Myservo[6].read()-1);
    Myservo[1].write(Myservo[1].read()-1);
    Myservo[3].write(Myservo[3].read()-1);
    delay(5);
  }
  for(int i=0;i<30;i++)
  {
    Myservo[5].write(Myservo[5].read()+1);
    Myservo[7].write(Myservo[7].read()+1);
    delay(5);
  }
  for(int i=0;i<30;i++)
  {
    Myservo[1].write(Myservo[1].read()+1);
    Myservo[3].write(Myservo[3].read()+1);
    delay(5);
  }
  for(int i=0;i<30;i++)
  {
    Myservo[5].write(Myservo[5].read()-1);
    Myservo[7].write(Myservo[7].read()-1);
    delay(5);
  }
  }
  else
  {
    for(int i=0;i<30;i++)
{
 Myservo[0].write(Myservo[0].read()+1);
 Myservo[2].write(Myservo[2].read()+1);
 delay(5);
}
for(int i=0;i<30;i++)
{
  Myservo[4].write(Myservo[4].read()-1);
  Myservo[6].write(Myservo[6].read()-1);
  delay(5);
}
  for (int i=0;i<30;i++)
  {
    
  Myservo[0].write(Myservo[0].read()-1);
  Myservo[2].write(Myservo[2].read()-1);
  delay(5);
  }
  
  for (int i=0;i<30;i++)
  {
    Myservo[4].write(Myservo[4].read()+1);
    Myservo[6].write(Myservo[6].read()+1);
    Myservo[1].write(Myservo[1].read()-1);
    Myservo[3].write(Myservo[3].read()-1);
    delay(5);
  }
  for(int i=0;i<30;i++)
  {
    Myservo[5].write(Myservo[5].read()-1);
    Myservo[7].write(Myservo[7].read()-1);
    delay(5);
  }
  for(int i=0;i<30;i++)
  {
    Myservo[1].write(Myservo[1].read()+1);
    Myservo[3].write(Myservo[3].read()+1);
    delay(5);
  }
  for(int i=0;i<30;i++)
  {
    Myservo[5].write(Myservo[5].read()+1);
    Myservo[7].write(Myservo[7].read()+1);
    delay(5);
  }
  }
    
    
}
}

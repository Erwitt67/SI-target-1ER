// code by vultorio
//

#include <Servo.h>
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

bool shoot1 = false;
bool shoot2 = false;
bool shoot3 = false;
bool shoot4 = false;

void setup()
{
  Serial.begin(9600);
  myservo1.attach(9);
  myservo1.write(0);    
    myservo2.attach(10);
  myservo2.write(0);  
    myservo3.attach(11);
  myservo3.write(0);  
    myservo4.attach(3);
  myservo4.write(0);  
  
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  int light1 = analogRead(A0);
  int light2 = analogRead(A1);
  int light3 = analogRead(A2);
  int light4 = analogRead(A3);
	Serial.println(light1);
  
  if (light1 >= 900)
  {
    myservo1.write(90);  
    shoot1 = true;
    digitalWrite(4, 1);
    
    delay(500);
    
    digitalWrite(4, 0);
    
  }
  
    if (light2 >= 900)
  {
    myservo2.write(90);  
      shoot2 = true;
      
      digitalWrite(5, 1);
      
      delay(500);
      
      digitalWrite(5, 0);
  }
  
    
  if (light3 >= 900)
  {
    myservo3.write(90);  
    shoot3 = true;
    
    digitalWrite(6, 1);
    
    delay(500);
    
    digitalWrite(6, 0);
  }
  
    if (light4 >= 900)
  {
    myservo4.write(90);  
      shoot4 = true;
      
      digitalWrite(7, 1);
      
      delay(500);
      
      digitalWrite(7, 0);
  }
  
  if (shoot1 == true && shoot2 == true && shoot3 == true && shoot4 == true)
  {
    myservo1.write(0);  
    myservo2.write(0);  
    myservo3.write(0);  
    myservo4.write(0);  
    
    shoot1 = false;
    shoot2 = false;
    shoot3 = false;
    shoot4 = false;
    
    delay(1000);
    
  }
  
}

#include <Servo.h>
Servo servoMotor1;
Servo servoMotor2;
int var1=90;
int var2=90;
int t=0;
int val=0;
#define IND 13


void setup(){
  Serial.begin(9600);
  servoMotor1.attach(9);
  servoMotor2.attach(10);
  servoMotor1.write(var1);
  servoMotor2.write(var2);
  pinMode(IND,OUTPUT);
}
void loop(){
  if(Serial.available()>0){
    val=Serial.read();
      if(val=='a'){
        delay(100);
          servoMotor1.write(45);
      }
      if(val=='b'){
        delay(100);
          servoMotor1.write(145);
      }
       if(val=='c'){
        delay(100);
          servoMotor2.write(10);
      }
      if(val=='d'){
        delay(100);
          servoMotor2.write(120);



      }
      if(val=='s'){
        delay(500);
        servoMotor2.write(10);
        servoMotor1.write(10);
        for (int g=10;g<=170;g++){
              servoMotor1.write(g);
              servoMotor2.write(g);
        }
        for (int h=170;h>=10;h--){
              servoMotor1.write(h);
              servoMotor2.write(h);
        }
      }      
      if (val=='r')  {
        digitalWrite(IND, HIGH);
        delay(100);
        digitalWrite(IND, LOW);
        delay(1000);
        digitalWrite(IND, HIGH);
        delay(1000);
        digitalWrite(IND, LOW);
        delay(100);
        
      }
      }
   delay(500);
  }

int val=0;
#define IND 13


void setup(){
  Serial.begin(9600);
  pinMode(IND,OUTPUT);
}
void loop(){
  if(Serial.available()>0){
    val=Serial.read();
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

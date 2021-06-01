
#include <Servo.h>
//pins  3      6     5     9     10     11
Servo little,middle,ring,index,thumb1,thumb2;

int indexsensor = A1;    // select the input pin for the potentiometer
int middlesensor = A2;    // select the input pin for the potentiometer
int littlesensor = A3;    // select the input pin for the potentiometer

int indexsensorValue;
int middlesensorValue;
int littlesensorValue;
int oldindex;
int oldmiddle;
int oldlittle;

int pos = 0;
int delay1 = 5;

void setup() {

    little.attach(3);
    middle.attach(6);
    ring.attach(5);
    index.attach(9);
    thumb1.attach(10);
    thumb1.write(180);

    thumb2.attach(11);
    thumb2.write(180);    
    little.write(0);
    middle.write(0);
    ring.write(0);
    index.write(0);
    Serial.begin(9600); // opens serial port, sets data rate to 9600 bps

}

void loop() {
  indexsensorValue = analogRead(indexsensor);
  delay(100);
  middlesensorValue = analogRead(middlesensor);
  delay(100);
  littlesensorValue = analogRead(littlesensor);
  delay(100);
/////////////////////////
//index finger//////////
/////////////////////////
  if ((indexsensorValue > 350) and (oldindex == 1))   //old open
  {
      for (pos = 160; pos >= 0; pos -= 1) {
        index.write(pos);
        thumb1.write(180-pos);          // Open Thumb
        thumb2.write(180-pos);     // Open Thumb
        delay(delay1);
      }
      oldindex = 0; // close now
  }
  if ((indexsensorValue < 350) and (oldindex == 0))  //old close
  {
      for (pos = 0; pos <= 160; pos += 1) {        
          index.write(pos);
          thumb1.write(180-pos);          // Open Thumb
          thumb2.write(180-pos);     // Open Thumb
      delay(delay1);
   }
       oldindex = 1; //open noe
  }
///////////////////////////////
/////Middle Finger////////////
//////////////////////////////
  if ((middlesensorValue > 350) and (oldmiddle == 1))   //old open
  {
      for (pos = 160; pos >= 0; pos -= 1) {
        middle.write(pos);
        ring.write(pos);          
        delay(delay1);
      }
      oldmiddle = 0; // close now
  }
  if ((middlesensorValue < 350) and (oldmiddle == 0))  //old close
  {
      for (pos = 0; pos <= 160; pos += 1) {        
          middle.write(pos);
          ring.write(pos);          
      delay(delay1);
   }
       oldmiddle = 1; //open noe
  }
///////////////////////////////
/////Little Finger////////////
//////////////////////////////
  if ((littlesensorValue > 350) and (oldlittle == 1))   //old open
  {
      for (pos = 160; pos >= 0; pos -= 1) {
        little.write(pos);
        ring.write(pos);          
        delay(delay1);
      }
      oldlittle = 0; // close now
  }
  if ((littlesensorValue < 350) and (oldlittle == 0))  //old close
  {
      for (pos = 0; pos <= 160; pos += 1) {        
          little.write(pos);
          ring.write(pos);          
      delay(delay1);
   }
       oldlittle = 1; //open noe
  }
  
  delay(100);
  Serial.println("Index Sensor Value"); 
  Serial.println(indexsensorValue);
//  Serial.println("Middle Sensor Value" + middlesensorValue);
//  Serial.println("Little Sensor Value" + littlesensorValue);
}

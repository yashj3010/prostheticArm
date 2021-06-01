#include <Servo.h>
//pins  3      6     5     9     10     11
Servo little,middle,ring,index,thumb1,thumb2;
int pos = 0;
int delay1 = 3;
int incomingByte = 0; 
int oldone =0;
void setup() 
{
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
    delay(3000);
}

void loop() 
{

 if (Serial.available() > 0) {
  incomingByte = Serial.read();

    if (incomingByte == 50) {
    if (oldone != 50){
// Open hand
    for (pos = 160; pos >= 0; pos -= 1) {
      index.write(pos);
      middle.write(pos);
      ring.write(pos);
      little.write(pos);
      thumb1.write(180-pos);            // Close thumb
      thumb2.write(180-pos);              //Open thumb
    delay(delay1);
    }
         oldone = 50;
 
    }
    }
    if (incomingByte == 49) {
      if (oldone != 49) {
        // close hand
        for (pos = 0; pos <= 100; pos += 1) {
              index.write(pos);
              middle.write(pos);
              ring.write(pos);
              little.write(pos);
             thumb1.write(180-pos);          // Open Thumb
              thumb2.write(180-pos);     // Open Thumb
              delay(delay1);
          }
        
        for (pos = 100; pos <= 160; pos += 1) {
              index.write(pos);
              middle.write(pos);
              ring.write(pos);
              little.write(pos);
              delay(delay1);
          }
               oldone = 49;
              }
 
}
}
}

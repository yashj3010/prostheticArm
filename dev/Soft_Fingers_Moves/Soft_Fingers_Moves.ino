#include <Servo.h>
//pins  3      6     5     9     10     11
Servo little,middle,ring,index,thumb1,thumb2;
int pos = 0;
int delay1 = 10;
int delay2 = 5;
int delay3 = 2;
int delay4 = 1;
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

    delay(3000);
}

void loop() 
{


// Open hand
    for (pos = 0; pos <= 180; pos += 1) {
      index.write(pos);
      delay(delay1);
  }
  for (pos = 0; pos <= 180; pos += 1) {
      middle.write(pos);
      delay(delay1);
  }
  for (pos = 0; pos <= 180; pos += 1) {
      ring.write(pos);
      delay(delay1);
  }
  for (pos = 0; pos <= 180; pos += 1) {
      little.write(pos);
      delay(delay1);
  }
 for (pos = 180; pos >= 0; pos -= 1) {
      thumb1.write(pos);            // Close thumb
      thumb2.write(pos);              //Open thumb
      delay(delay1);
  }

  delay(2000);

// close hand
  for (pos = 0; pos <= 180; pos += 1) {
      thumb1.write(pos);          // Open Thumb
      thumb2.write(pos);     // Open Thumb
      delay(delay1);
  }

    for (pos = 180; pos >= 0; pos -= 1) {
      index.write(pos);
      delay(delay1);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
      middle.write(pos);
      delay(delay1);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
      ring.write(pos);
      delay(delay1);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
      little.write(pos);
      delay(delay1);
  }  delay(2000);

// Open hand
    for (pos = 0; pos <= 180; pos += 1) {
      index.write(pos);
      delay(delay2);
  }
  for (pos = 0; pos <= 180; pos += 1) {
      middle.write(pos);
      delay(delay2);
  }
  for (pos = 0; pos <= 180; pos += 1) {
      ring.write(pos);
      delay(delay2);
  }
  for (pos = 0; pos <= 180; pos += 1) {
      little.write(pos);
      delay(delay2);
  }
 for (pos = 180; pos >= 0; pos -= 1) {
      thumb1.write(pos);            // Close thumb
      thumb2.write(pos);              //Open thumb
      delay(delay2);
  }

  delay(2000);

// close hand
  for (pos = 0; pos <= 180; pos += 1) {
      thumb1.write(pos);          // Open Thumb
      thumb2.write(pos);     // Open Thumb
      delay(delay2);
  }

    for (pos = 180; pos >= 0; pos -= 1) {
      index.write(pos);
      delay(delay2);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
      middle.write(pos);
      delay(delay2);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
      ring.write(pos);
      delay(delay2);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
      little.write(pos);
      delay(delay2);
  }  delay(2000);


// Open hand
    for (pos = 0; pos <= 180; pos += 1) {
      index.write(pos);
      delay(delay3);
  }
  for (pos = 0; pos <= 180; pos += 1) {
      middle.write(pos);
      delay(delay3);
  }
  for (pos = 0; pos <= 180; pos += 1) {
      ring.write(pos);
      delay(delay3);
  }
  for (pos = 0; pos <= 180; pos += 1) {
      little.write(pos);
      delay(delay3);
  }
 for (pos = 180; pos >= 0; pos -= 1) {
      thumb1.write(pos);            // Close thumb
      thumb2.write(pos);              //Open thumb
      delay(delay3);
  }

  delay(2000);

// close hand
  for (pos = 0; pos <= 180; pos += 1) {
      thumb1.write(pos);          // Open Thumb
      thumb2.write(pos);     // Open Thumb
      delay(delay3);
  }

    for (pos = 180; pos >= 0; pos -= 1) {
      index.write(pos);
      delay(delay3);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
      middle.write(pos);
      delay(delay3);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
      ring.write(pos);
      delay(delay3);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
      little.write(pos);
      delay(delay3);
  }  delay(2000);

// Open hand
    for (pos = 0; pos <= 180; pos += 1) {
      index.write(pos);
      delay(delay4);
  }
  for (pos = 0; pos <= 180; pos += 1) {
      middle.write(pos);
      delay(delay4);
  }
  for (pos = 0; pos <= 180; pos += 1) {
      ring.write(pos);
      delay(delay4);
  }
  for (pos = 0; pos <= 180; pos += 1) {
      little.write(pos);
      delay(delay4);
  }
 for (pos = 180; pos >= 0; pos -= 1) {
      thumb1.write(pos);            // Close thumb
      thumb2.write(pos);              //Open thumb
      delay(delay4);
  }

  delay(2000);

// close hand
  for (pos = 0; pos <= 180; pos += 1) {
      thumb1.write(pos);          // Open Thumb
      thumb2.write(pos);     // Open Thumb
      delay(delay4);
  }

    for (pos = 180; pos >= 0; pos -= 1) {
      index.write(pos);
      delay(delay4);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
      middle.write(pos);
      delay(delay4);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
      ring.write(pos);
      delay(delay4);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
      little.write(pos);
      delay(delay4);
  }  delay(2000);
  
}

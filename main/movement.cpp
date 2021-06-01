#include "movement.h"
#include <Servo.h>

//pins  3      6     5     9     10     11
Servo little, middle, ring, index, thumb1, thumb2;

int pos = 0;

const int delay1 = 10;
const int delay2 = 5;
const int delay3 = 2;
const int delay4 = 1;

Movement::Movement(byte pin_little,
                   byte pin_middle,
                   byte pin_ring,
                   byte pin_index,
                   byte pin_thumb1,
                   byte pin_thumb2) {
  this->pin_little = pin_little;
  this->pin_middle = pin_middle;
  this->pin_ring = pin_ring;
  this->pin_index = pin_index;
  this->pin_thumb1 = pin_thumb1;
  this->pin_thumb2 = pin_thumb2;
  init();
}

void Movement::init() {

  pinMode(pin_little, OUTPUT);
  pinMode(pin_middle, OUTPUT);
  pinMode(pin_ring, OUTPUT);
  pinMode(pin_index, OUTPUT);
  pinMode(pin_thumb1, OUTPUT);
  pinMode(pin_thumb2, OUTPUT);
  little.attach(pin_little);
  middle.attach(pin_middle);
  ring.attach(pin_ring);
  index.attach(pin_index);
  thumb1.attach(pin_thumb1);
  thumb2.attach(pin_thumb2);

  thumb1.write(180);
  thumb2.write(180);
  little.write(0);
  middle.write(0);
  ring.write(0);
  index.write(0);
}

void Movement::openIndex() {
  for (pos = 0; pos <= 180; pos += 1)
  {
    index.write(pos);
    delay(delay1);
  }
}

void Movement::openMiddle() {
  for (pos = 0; pos <= 180; pos += 1)
  {
    middle.write(pos);
    delay(delay1);
  }
}

void Movement::openRing() {
  for (pos = 0; pos <= 180; pos += 1)
  {
    ring.write(pos);
    delay(delay1);
  }
}

void Movement::openLittle() {
  for (pos = 0; pos <= 180; pos += 1)
  {
    little.write(pos);
    delay(delay1);
  }
}

void Movement::openThumb() {
  for (pos = 180; pos >= 0; pos -= 1)
  {
    thumb2.write(pos); //Open thumb
    delay(delay1);
  }
}

void Movement::closeIndex() {
  for (pos = 180; pos >= 0; pos -= 1)
  {
    index.write(pos);
    delay(delay1);
  }
}
void Movement::closeMiddle() {
  for (pos = 180; pos >= 0; pos -= 1)
  {
    middle.write(pos);
    delay(delay1);
  }
}

void Movement::closeRing() {
  for (pos = 180; pos >= 0; pos -= 1)
  {
    ring.write(pos);
    delay(delay1);
  }
}

void Movement::closeLittle() {
  for (pos = 180; pos >= 0; pos -= 1)
  {
    little.write(pos);
    delay(delay1);
  }
}

void Movement::closeThumb() {
  for (pos = 180; pos >= 0; pos -= 1)
  {
    thumb1.write(pos); // Close thumb
    delay(delay1);
  }
}

void Movement::openHand() {
  void openIndex();
  void openMiddle();
  void openRing();
  void openLittle();
  void openThumb();
}

void Movement::closeHand() {
  void closeIndex();
  void closeMiddle();
  void closeRing();
  void closeLittle();
  void closeThumb();
}

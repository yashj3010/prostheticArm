#ifndef MY_MOVEMENT_H
#define MY_MOVEMENT_H

#include <Arduino.h>

class Movement {

  private:
    byte pin_little;
    byte pin_middle;
    byte pin_ring;
    byte pin_index;
    byte pin_thumb1;
    byte pin_thumb2;

  public:
    Movement(byte pin_little,
    byte pin_middle,
    byte pin_ring,
    byte pin_index,
    byte pin_thumb1,
    byte pin_thumb2);
    
    void init();
    void openIndex();
    void openMiddle();
    void openRing();
    void openLittle();
    void openThumb();
    void closeIndex();
    void closeMiddle();
    void closeRing();
    void closeLittle();
    void closeThumb();
    void openHand();
    void closeHand();
};

#endif

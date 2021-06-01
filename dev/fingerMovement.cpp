#include <Servo.h>

//pins  3      6     5     9     10     11
Servo little, middle, ring, index, thumb1, thumb2;

int pos = 0;

const int delay1 = 10;
const int delay2 = 5;
const int delay3 = 2;
const int delay4 = 1;

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

void openIndex(){
    for (pos = 0; pos <= 180; pos += 1)
    {
        index.write(pos);
        delay(delay1);
    }
}

void openMiddle(){
    for (pos = 0; pos <= 180; pos += 1)
    {
        middle.write(pos);
        delay(delay1);
    }
}

void openRing(){
    for (pos = 0; pos <= 180; pos += 1)
    {
        ring.write(pos);
        delay(delay1);
    }
}

void openLittle(){
    for (pos = 0; pos <= 180; pos += 1)
    {
        little.write(pos);
        delay(delay1);
    }
}

void openThumb(){
    for (pos = 180; pos >= 0; pos -= 1)
    {
        thumb2.write(pos); //Open thumb
        delay(delay1);
    }
}

void closeIndex(){
    for (pos = 180; pos >= 0; pos -= 1)
    {
        index.write(pos);
        delay(delay1);
    }
}

void closeMiddle(){
    for (pos = 180; pos >= 0; pos -= 1)
    {
        middle.write(pos);
        delay(delay1);
    }
}

void closeRing(){
    for (pos = 180; pos >= 0; pos -= 1)
    {
        ring.write(pos);
        delay(delay1);
    }
}

void closeLittle(){
    for (pos = 180; pos >= 0; pos -= 1)
    {
        little.write(pos);
        delay(delay1);
    }
}

void closeThumb(){
    for (pos = 180; pos >= 0; pos -= 1)
    {
        thumb1.write(pos); // Close thumb
        delay(delay1);
    }
}

void openHand(){
    void openIndex();
    void openMiddle();
    void openRing();
    void openLittle();
    void openThumb();
}

void closeHand(){
    void closeIndex();
    void closeMiddle();
    void closeRing();
    void closeLittle();
    void closeThumb();
}

void loop()
{
    openHand();
    delay(2000);
    closeHand();
}
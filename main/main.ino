#include "movement.h"
#include <movingAvg.h>

#define EMG1_PIN A0
#define EMG2_PIN A1
#define EMG3_PIN A2

#define pin_little 3
#define pin_middle 6
#define pin_ring 5
#define pin_index 9
#define pin_thumb1 10
#define pin_thumb2 11

const int samplingRate = 3;
const int samplingInterval = 10;

unsigned long lastReading = 0;

int outputPins[] = {};
int inputPins[] = {EMG1_PIN, EMG2_PIN, EMG3_PIN};

movingAvg emgReader(samplingRate);

Movement movement(pin_little,
                  pin_middle,
                  pin_ring,
                  pin_index,
                  pin_thumb1,
                  pin_thumb2);

struct EMGsensor
{ const byte  pin;
  float thisValue;
  float lastValue;
  float diffValue;
};

struct EMGsensor EMG1 = {.pin = EMG1_PIN, .thisValue = 0, .lastValue = 0, .diffValue = 0};
struct EMGsensor EMG2 = {.pin = EMG2_PIN, .thisValue = 0, .lastValue = 0, .diffValue = 0};
struct EMGsensor EMG3 = {.pin = EMG3_PIN, .thisValue = 0, .lastValue = 0, .diffValue = 0};

void readEmg(struct EMGsensor *EMGsensor);
void setOutputMode(int outputPins[]);
void setInputMode(int inputPins[]);

void setup()
{
  Serial.begin(9600);
  setInputMode(inputPins);
  setOutputMode(outputPins);
  emgReader.begin();
}

void loop()
{
  unsigned long now = millis();
  if (now - lastReading > samplingInterval) {
    lastReading = now;

    readEmg(&EMG1);
    readEmg(&EMG2);
    readEmg(&EMG3);

    Serial.println("EMG1:");
    Serial.print(EMG1.diffValue);
    Serial.println("EMG2:");
    Serial.print(EMG2.diffValue);
    Serial.println("EMG3:");
    Serial.print(EMG3.diffValue);

    movement.openHand();
    delay(5000);
    movement.closeHand();
    delay(5000);
  }
}

// MAIN HELPER FUNCTIONS
void readEmg(struct EMGsensor *EMGsensor) {
  EMGsensor->lastValue = EMGsensor->thisValue;
  EMGsensor->thisValue = emgReader.reading(analogRead(EMGsensor->pin));
  EMGsensor->diffValue = EMGsensor->thisValue - EMGsensor->lastValue;
}


// SIDE HELPER FUNCTIONS
void setOutputMode(int outputPins[])
{
  int len = sizeof(outputPins) / sizeof(outputPins[0]);
  for (int i = 0; i < len ; i++)
  {
    pinMode(outputPins[i], OUTPUT);
    digitalWrite(outputPins[i], LOW);
  }
}

void setInputMode(int inputPins[])
{
  int len = sizeof(inputPins) / sizeof(inputPins[0]);
  for (int i = 0; i < len ; i++)
  {
    pinMode(inputPins[i], INPUT);
  }
}

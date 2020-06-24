#include "D2DPower.h"

D2DPower pwr;

void setup() {
  // put your setup code here, to run once:
  pwr.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  pwr.isCharging();
  pwr.getBatteryVoltage();
  //print this information to my watch screen
}

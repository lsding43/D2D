#ifndef D2DPower_h
#define D2DPower_h

#include <Arduino.h>

class D2DPower
{
private:


public:

  D2DPower();
  void begin();
  
  bool isCharging();
  uint16_t getBatteryVoltage();

  void enableGPS();
  void disableGPS();

  void enableMP3();
  void disableMP3();
};

#endif

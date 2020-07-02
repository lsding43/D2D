#include "D2DPower.h"

const uint8_t chrgPin = 27;
const uint8_t battPin = A4;
const uint8_t gpsPwrPin = 2;

const uint16_t vdd = 3300;
const uint16_t adcResolution = 1023;

D2DPower::D2DPower(){ 
}

void D2DPower::begin(){  
  pinMode(chrgPin, INPUT);
  pinMode(gpsPwrPin, OUTPUT);
}

//returns whether or not the battery is charging
bool D2DPower::isCharging(){
  return !digitalRead(chrgPin); //return 0 if charging, 1 if not charging
}

uint16_t D2DPower::getBatteryVoltage(){
  uint16_t val = analogRead(battPin); //10-bit ADC, will return a number between 0 (0V)and 1023 (3.3V)
  uint16_t voltage = vdd*(val/adcResolution);

  return 2*voltage; 
}

void D2DPower::enableGPS(){
  digitalWrite(gpsPwrPin, HIGH); //enables regulator, turning ON GPS Circuit
}

void D2DPower::disableGPS(){
    digitalWrite(gpsPwrPin, LOW); //disables regulator, turning OFF GPS Circuit
}

void D2DPower::enableMP3(){
  
}

void D2DPower::disableMP3(){
  
}
 

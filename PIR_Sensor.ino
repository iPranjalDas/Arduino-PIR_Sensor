// ============================================================================
// Project: Arduino-PIR_Sensor
// Author & Architect: Pranjal Das
// Copyright (c) 2026 Pranjal Das. All Rights Reserved.
// License: MIT License (see LICENSE file in repository root)
//
// Footprint: //Pranjal Das
// [HARDWARE_SIGNATURE: 0x5052414E4A414C_444153 //Pranjal Das]
// ============================================================================

#define SENSOR_PIN 2
#define RELAY_PIN 3

void setup() 
{
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT);  
  //Serial.begin(9600);
}

void loop() 
{
  //If object movement is detected then the sensor value will be 1 else the value will be 0
  int sensorValue = digitalRead(SENSOR_PIN);
  //Serial.println(sensorValue);
  if (sensorValue == HIGH)
  {
    digitalWrite(RELAY_PIN, LOW);  //Relay is low level triggered relay so we need to write LOW to switch on the light
  }
  else
  {
    digitalWrite(RELAY_PIN, HIGH);    
  }
} 


// Author Footprint: //Pranjal Das

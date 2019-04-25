#include <Arduino.h>
#include <Wire.h>
#include <ArdusatSDK.h>

ArdusatSerial serialConnection(SERIAL_MODE_HARDWARE_AND_SOFTWARE, 8, 9);

Luminosity lum;
TemperatureMLX temp;

void setup(void)
{
  serialConnection.begin(9600);

  lum.begin();
  temp.begin();

  serialConnection.println("");
}

void loop(void)
{
  serialConnection.println(temp.readToJSON("infraredTemp"));
  serialConnection.println(lum.readToJSON("luminosity"));

  delay(200);
}

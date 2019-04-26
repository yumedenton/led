#include <Arduino.h>
#include <Wire.h>
#include <ArdusatSDK.h>

ArdusatSerial serialConnection(SERIAL_MODE_HARDWARE_AND_SOFTWARE, 8, 9);


TemperatureMLX temp;

void setup(void)
{
  serialConnection.begin(9600);


  temp.begin();

  serialConnection.println("");
}

void loop(void)
{
  serialConnection.println(temp.readToJSON("infraredTemp"));


  delay(200);
}
void loop() {
 
  display.clearDisplay(); 
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  // Fills the display buffer with text
    {
    if(temp>=34)
  display.println("Hot");
  // Show the display buffer on the OLED display
  display.display();
    }

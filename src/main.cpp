#include <mbed.h>
#include "TextLCD.h"

// A basic example illustrating the use of TextLCD with a DFROBOT-based 20x4 display
// from Amazon: https://www.amazon.com/gp/product/B01GPUMP9C/
int main()
{
  I2C i2c_lcd(I2C_SDA, I2C_SCL);

  // mbed os uses 8-bit addresses for I2C. When reading documentation for displays
  // they typically list the address assuming 7-bits instead. For the specific
  // display from Amazon listed above the 7-bit address is 0x27. To make it work
  // on mbed os it has to be shifted left one position when initializing the TextLCD_I2C
  // object.
  TextLCD_I2C display(&i2c_lcd, 0x27 << 1, TextLCD_Base::LCDType::LCD20x4);

  // Basic display setup.
  display.setBacklight(TextLCD_Base::LCDBacklight::LightOn);
  display.setCursor(TextLCD::CurOff_BlkOff);

  // Show some text
  display.printf("Hello from TextLCD_I2C!");
}
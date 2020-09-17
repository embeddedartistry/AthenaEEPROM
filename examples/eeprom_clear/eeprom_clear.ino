/*
 * EEPROM Clear
 *
 * Sets all of the bytes of the EEPROM to 0.
 * This example code is in the public domain.

 */

#include <AthenaEEPROM.h>

void setup()
{
  // write a 0 to all available bytes of the EEPROM
  for (int i = 0; i < (512 - NETEEPROM_OFFSET); i++)
    EEPROM.write(i, 0);

  // turn the LED on when we're done
  digitalWrite(13, HIGH);
}

void loop()
{
}

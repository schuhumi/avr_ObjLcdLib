#include <avr/io.h>
#include "LCD.h"
	
int main (void)
{	
	type_LCD frontLCD;
	
	/// Configure Devices //////////////////////////////////////
	// Display configuration:
		frontLCD.ddr = &DDRD;
		frontLCD.port = &PORTD;
		frontLCD.pin = &PIND;
		frontLCD.pinNr_EN = PD5;
		frontLCD.pinNr_RS = PD4;
		frontLCD.pinNr_D4 = PD0;
		frontLCD.pinNr_D5 = PD1;
		frontLCD.pinNr_D6 = PD2;
		frontLCD.pinNr_D7 = PD3;
	/// END Configure Devices //////////////////////////////////
	
	/// INIT Devices ///////////////////////////////////////////
	// INIT display
		LCD_INIT(&frontLCD);
		LCD_CLEAR(&frontLCD);
	/// END INIT Devices ///////////////////////////////////////
	
	LCD_STRING(&frontLCD, "Hallo, Welt!");
	LCD_POS(&frontLCD, 1, 4);
	LCD_FLOAT(&frontLCD, 1337.42);

	while(1);

	return 0;
}

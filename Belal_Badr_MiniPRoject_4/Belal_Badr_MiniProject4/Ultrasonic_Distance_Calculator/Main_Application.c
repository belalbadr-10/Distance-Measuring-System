 /******************************************************************************
 *
 * Module: Main Application Algorithm
 *
 * File Name: Main_Application.c
 *
 * Description: Source file for the main application algorithm
 *
 * Author: Belal Badr
 *
 *******************************************************************************/

#include "Ultrasonic_Sensor.h"
#include "lcd.h"
#include <avr/io.h> /* To use SREG Register */

int main(void)
{
	uint16 distance_value;
	/* Initializing the main devices */
	LCD_init();
	Ultrasonic_init();

	/* Enable Global Interrupt I-Bit */
	SREG |= (1<<7);

	LCD_displayStringRowColumn(0,0,"Distance =    Cm");
	while(1)
	{
		LCD_moveCursor(0,11);
		distance_value = Ultrasonic_readDistance();
		if(distance_value <10)
		{
			LCD_intgerToString(distance_value);

			/* In case the digital value is one digit print space in the next digit place */
			LCD_displayCharacter(' ');
			LCD_displayCharacter(' ');
		}
		else if(distance_value < 100)
		{
			LCD_intgerToString(distance_value);

			/* In case the digital value is two digits print space in the next digit place */
			LCD_displayCharacter(' ');
		}
		else
		{
			LCD_intgerToString(distance_value);
		}
	}
}

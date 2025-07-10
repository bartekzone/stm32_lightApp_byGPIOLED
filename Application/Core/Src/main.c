/*
 ******************************************************************************
 * @file           : main.c
 * @author         : BZ
 * @brief          : Main program body
 ******************************************************************************
 */
#include "main.h"
#include "Swc_LightsControl.h"

int main(void)
{
	Swc_Lights_Init();
	Swc_Lights_delay();
	Swc_Lights_TurnOnLed();
	Swc_Lights_delay();
	Swc_Lights_TurnOffLed();
	Swc_Lights_delay();

	Swc_Lights_TurnOnRelay();
	Swc_Lights_delay();
	Swc_Lights_TurnOffRelay();
	Swc_Lights_delay();
	return 0;
}

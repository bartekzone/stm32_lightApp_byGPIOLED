/*
 ******************************************************************************
 * @file           : Swc_LightsControl.c
 * @author         : BZ
 * @brief          : Application logic layer
 ******************************************************************************
 */
#include "Swc_LightsControl.h"
#include "Rte_LightsControl.h"
#include "stdint.h"

void Swc_Lights_Init(void) {
	Rte_Lights_Init();
}
void Swc_Lights_LEDMainFunction(void) {
	Swc_Lights_TurnOnLed();
	Swc_Lights_delay();
	Swc_CheckButton();
	Swc_Lights_TurnOffLed();
	Swc_Lights_delay();
}

void Swc_Lights_RelayMainFunction(void) {
	Swc_Lights_TurnOnRelay();
	Swc_Lights_delay();
	Swc_Lights_TurnOffRelay();
	Swc_Lights_delay();
	}

void Swc_Lights_TurnOnLed(void) {
    Rte_TurnOnLed();
}
void Swc_Lights_TurnOnLedBlink(void) {
	for (volatile uint32_t i=0; i<4; i++)
	{
		Swc_Lights_TurnOffLed();
		Swc_Lights_blinkdelay();
		Swc_Lights_TurnOnLed();

	}
}
void Swc_Lights_TurnOffLed(void) {
    Rte_TurnOffLed();
}

void Swc_Lights_TurnOnRelay(void) {
    Rte_TurnOnRelay();
}

void Swc_Lights_TurnOffRelay(void) {
    Rte_TurnOffRelay();
}

void Swc_Lights_delay(void) {
    for (volatile uint32_t i=0; i<1000000; i++);
}
void Swc_Lights_blinkdelay(void) {
    for (volatile uint32_t i=0; i<10000; i++);
}
void Swc_CheckButton(void) {
	bool buttonPressed;
	if(Rte_CheckButton(&buttonPressed))
	{
		if(buttonPressed)
			Swc_Lights_TurnOnLedBlink();
		else
			Swc_Lights_TurnOffLed();
	}
	else
	{
		Swc_Lights_TurnOnLed();
	}

}

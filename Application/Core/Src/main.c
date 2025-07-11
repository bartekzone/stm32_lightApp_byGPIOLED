/*
 ******************************************************************************
 * @file           : main.c
 * @author         : BZ
 * @brief          : Main program body
 ******************************************************************************
 */
#include "main.h"
#include "Swc_LightsControl.h"
#include "EcuM.h"

int main(void)
{
	EcuM_Init();
	Swc_Lights_Init();
	EcuM_MainFunction();
	Swc_Lights_LEDMainFunction();
	Swc_Lights_RelayMainFunction();
	return 0;
}

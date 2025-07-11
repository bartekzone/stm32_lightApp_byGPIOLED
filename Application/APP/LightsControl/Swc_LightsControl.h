/*
 ******************************************************************************
 * @file           : Swc_LightsControl.h
 * @author         : BZ
 * @brief          : Includes for application logic layer
 ******************************************************************************
 */
#ifndef SWC_LIGHTS_CONTROL_H
#define SWC_LIGHTS_CONTROL_H

void Swc_Lights_Init(void);
void Swc_Lights_LEDMainFunction(void);
void Swc_Lights_RelayMainFunction(void);
void Swc_Lights_TurnOnLed(void);
void Swc_Lights_TurnOffLed(void);
void Swc_Lights_TurnOnRelay(void);
void Swc_Lights_TurnOffRelay(void);
void Swc_Lights_delay(void);

#endif

/*
 ******************************************************************************
 * @file           : Rte_LightsControl.c
 * @author         : BZ
 * @brief          : RTE layer for GPIO call
 ******************************************************************************
 */
#ifndef RTE_LIGHTS_CONTROL_H
#define RTE_LIGHTS_CONTROL_H

void Rte_Lights_Init(void);
void Rte_TurnOnLed(void);
void Rte_TurnOffLed(void);
void Rte_TurnOnRelay(void);
void Rte_TurnOffRelay(void);

#endif

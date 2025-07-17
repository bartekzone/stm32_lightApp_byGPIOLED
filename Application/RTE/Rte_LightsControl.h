/*
 ******************************************************************************
 * @file           : Rte_LightsControl.c
 * @author         : BZ
 * @brief          : RTE layer for GPIO call
 ******************************************************************************
 */
#ifndef RTE_LIGHTS_CONTROL_H
#define RTE_LIGHTS_CONTROL_H
#include "stdbool.h"

void Rte_Lights_Init(void);
bool Rte_CheckButton(bool *level);
void Rte_TurnOnLed(void);
void Rte_TurnOffLed(void);
void Rte_TurnOnRelay(void);
void Rte_TurnOffRelay(void);

#endif

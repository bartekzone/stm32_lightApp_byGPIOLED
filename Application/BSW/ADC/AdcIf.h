/*
 ******************************************************************************
 * @file           : AdcIf.h
 * @author         : BZ
 * @brief          : Voltage measurement interface
 ******************************************************************************
 */

#ifndef ADCIF_H
#define ADCIF_H

#include <stdint.h>

void AdcIf_Init(void);
uint16_t AdcIf_GetVoltage(void);

#endif /* ADCIF_H */

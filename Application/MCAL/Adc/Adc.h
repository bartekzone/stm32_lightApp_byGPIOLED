/*
 ******************************************************************************
 * @file           : Adc.h
 * @author         : BZ
 * @brief          : ADC (MCAL) abstrction interface
 ******************************************************************************
 */
#ifndef ADC_H
#define ADC_H

#include <stdint.h>

void Adc_Init(void);
uint16_t Adc_ReadChannel(uint8_t channel);

#endif

/*
 ******************************************************************************
 * @file           : Adc_Stm32.h
 * @author         : BZ
 * @brief          : ADC (MCAL) hardware interface
 ******************************************************************************
 */
#ifndef ADC_STM32_H
#define ADC_STM32_H

#include <stdint.h>

void Adc_Stm32_Init(void);
uint16_t Adc_Stm32_ReadChannel(uint8_t channel);

#endif

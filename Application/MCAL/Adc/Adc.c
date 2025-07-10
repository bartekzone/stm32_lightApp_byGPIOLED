/*
 ******************************************************************************
 * @file           : Adc.c
 * @author         : BZ
 * @brief          : ADC (MCAL) abstrction interface
 ******************************************************************************
 */
#include "ProjectConfig.h"
#include "Adc.h"

#ifdef PLATFORM_STM32F3
#include "Adc_Stm32.h"

void Adc_Init(void) {
	Adc_Stm32_Init();
}
uint16_t Adc_ReadChannel(uint8_t channel) {
	return Adc_Stm32_ReadChannel(channel);
}
#else
#error "No MCAL implementation for selected platform"
#endif

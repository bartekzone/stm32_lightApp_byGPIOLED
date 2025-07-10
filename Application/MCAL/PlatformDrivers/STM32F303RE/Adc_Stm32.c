/*
 ******************************************************************************
 * @file           : Adc_Stm32.c
 * @author         : BZ
 * @brief          : ADC (MCAL) hardware interface
 ******************************************************************************
 */
#include "Adc_Stm32.h"
#include "stm32f3xx.h"

void Adc_Stm32_Init(void) {
	//peripheral clock enable register
	//RCC->AHBENR |= RCC_AHBENR_ADC12EN; //rc clock enable
	//ADC configuration register ADC1_CFGR :
	// Clock prescaler (default - no divider)
	// Data alignment (defalut - Right)
	// Data resolution (default - 12 bit)
	// Single Conversion (default)
	// Software trigger (default)
	//ADC control register
	//ADC1->CR |= ADC_CR_ADVREGEN; //ADC voltage regulator enable
	//ADC sample time register 1
	//ADC1->SMPR1 |= ADC_SMPR1_SMP1_0 | ADC_SMPR1_SMP1_1 | ADC_SMPR1_SMP1_2; // Channel 1 sampling time 160.5 clock cycles
	//ADC calibration
	//ADC1->CR |= ADC_CR_ADCAL; //calibrate the ADC
	//while(ADC1->CR & ADC_CR_ADCAL); // Wait for calibration
	//ADC1->CR |= ADC_CR_ADEN ;//ADC enable

	// PA0
	// Enable Clock for PORT A
	//RCC->AHBENR |= RCC_AHBENR_GPIOAEN ;

	// Configure GPIO Mode - Analog
	// Defalut mode is analog
}
uint16_t Adc_Stm32_ReadChannel(uint8_t channel) {

//	ADC_ChannelConfTypeDef sConfig = {0};
//
//	// Konfiguruj kanał (przykład dla kanału 0)
//	sConfig.Channel = channel;
//	sConfig.Rank = ADC_REGULAR_RANK_1;
//	sConfig.SamplingTime = ADC_SAMPLETIME_1CYCLE_5;
//	HAL_ADC_ConfigChannel(&hadc1, &sConfig);
//
//	HAL_ADC_Start(&hadc1);
//	HAL_ADC_PollForConversion(&hadc1, HAL_MAX_DELAY);
//	uint16_t raw = HAL_ADC_GetValue(&hadc1);
//	HAL_ADC_Stop(&hadc1);
//
//	// Przeliczenie na mV zależne od rozdzielczości ADC i napięcia referencyjnego
//	// Dla 12 bitów i Vref=3.3V:
	// Start ADC Conversion
	//ADC1->CR |= ADC_CR_ADSTART; //ADC start of regular conversion
	// Wait for finish
	//ADC interrupt and status register
	//while(!(ADC1->ISR & ADC_ISR_EOC)); //Regular channel conversion complete
	return (11 * 3300) / 4095;
}

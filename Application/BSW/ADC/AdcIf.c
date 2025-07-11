/*
 ******************************************************************************
 * @file           : AdcIf.c
 * @author         : BZ
 * @brief          : Voltage measurement interface
 ******************************************************************************
 */
#include "AdcIf.h"
#include "Adc.h"  // MCAL
#include "Adc_Cfg.h"



void AdcIf_Init(void) {
	Adc_Init();
}
uint16_t AdcIf_GetVoltage(void) {

	uint16_t raw = Adc_ReadChannel(BATTERY_VOLTAGE_CHANNEL);
	// Przeliczenie na mV
	uint32_t voltage_mv = ((uint32_t)raw * ADC_REF_VOLTAGE_MV) / ADC_MAX_VALUE;
	return (uint16_t)voltage_mv;

}

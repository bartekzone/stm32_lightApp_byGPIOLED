/*
 ******************************************************************************
 * @file           : Dio.c
 * @author         : BZ
 * @brief          : Hardware Interface - call the hardware defined in the project
 ******************************************************************************
 */
#include "Dio.h"
#include "ProjectConfig.h"

#ifdef PLATFORM_STM32F3
#include "stm32f3xx.h"
#include "Dio_Stm32.h"

void Dio_Write(const GpioPinConfig_t* pinCfg, bool state) {
	//Dio_Stm32_Write(pinCfg, state);
	Dio_Stm32_WriteState_LD4(state);
}
void Dio_ConfigurePin(const GpioPinConfig_t *pinCfg) {
	//Dio_Stm32_ConfigurePin(pinCfg);
	Dio_Stm32_ConfigurePortA();
}

#else
#error "No MCAL implementation for selected platform"
#endif

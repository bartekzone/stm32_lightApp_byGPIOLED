/*
 ******************************************************************************
 * @file           : Dio_Stm32.h
 * @author         : BZ
 * @brief          : Hardware Interface for STM32F303RE
 ******************************************************************************
 */
#ifndef DIO_STM32_H
#define DIO_STM32_H

#include "Gpio_Cfg.h"
#include <stddef.h>

void Dio_Stm32_ConfigurePin(const GpioPinConfig_t* pinCfg);
void Dio_Stm32_Write(const GpioPinConfig_t* pinCfg, bool state);
void Dio_Stm32_ConfigurePortA(void);
void Dio_Stm32_WriteState_LD4(bool state);

#endif

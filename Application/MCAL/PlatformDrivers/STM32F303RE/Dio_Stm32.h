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
#include "stdbool.h"

#define PC13 (1<<13)

void Dio_Stm32_Configure_PortA_LD4(void);
void Dio_Stm32_WriteState_PortA_LD4(bool state);
void Dio_Stm32_Configure_PortC_Button(void);
bool Dio_Stm32_Read_Button_Pressed(void);

void Dio_Stm32_ConfigurePin(const GpioPinConfig_t* pinCfg);
void Dio_Stm32_Write(const GpioPinConfig_t* pinCfg, bool state);
//static GPIO_TypeDef* Dio_GetPort(GpioPort_t port);


#endif

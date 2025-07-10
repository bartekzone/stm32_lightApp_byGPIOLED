/*
 ******************************************************************************
 * @file           : Dio.h
 * @author         : BZ
 * @brief          : Hardware Interface - call the hardware defined in the project
 ******************************************************************************
 */
#ifndef DIO_H
#define DIO_H

#include <stdbool.h>
#include <stdint.h>
#include "Gpio_Cfg.h"

void Dio_Write(const GpioPinConfig_t* pinCfg, bool state);
void Dio_ConfigurePin(const GpioPinConfig_t *pinCfg);

#endif

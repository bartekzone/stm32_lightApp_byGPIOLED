/*
 ******************************************************************************
 * @file           : Gpio.h
 * @author         : BZ
 * @brief          : Board abstraction layer
 ******************************************************************************
 */
#ifndef GPIO_H
#define GPIO_H

#include <stdbool.h>
#include <stdint.h>
#include "Gpio_Cfg.h"

void gpio_init(void);
bool gpio_set(GpioSignal_t signal);
bool gpio_clear(GpioSignal_t signal);

#endif // GPIO_H

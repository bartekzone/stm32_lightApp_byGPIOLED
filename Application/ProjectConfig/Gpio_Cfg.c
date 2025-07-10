/*
 ******************************************************************************
 * @file           : Gpio_Cfg.c
 * @author         : BZ
 * @brief          : GPIO configuration
 ******************************************************************************
 */

#include "Gpio_Cfg.h"

const GpioPinConfig_t gpio_pin_map[GPIO_SIGNAL_COUNT] = {
    [GPIO_SIGNAL_LED] = { GPIO_PORT_A, 5 },   // LED -> PA5
    [GPIO_SIGNAL_RELAY] = { GPIO_PORT_B, 3 }  // RELAY -> PB3
};

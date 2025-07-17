/*
 ******************************************************************************
 * @file           : Gpio_Cfg.h
 * @author         : BZ
 * @brief          : GPIO abstraction configuration
 ******************************************************************************
 */
#ifndef GPIO_CFG_H
#define GPIO_CFG_H

#include <stdint.h>
#include <stdbool.h>

typedef enum {
	GPIO_PORT_A,
	GPIO_PORT_B,
	GPIO_PORT_C,
	GPIO_PORT_COUNT
} GpioPort_t;

typedef struct {
	GpioPort_t port;
	uint8_t  pin; // 0..15
} GpioPinConfig_t;

typedef enum {
    GPIO_SIGNAL_LED,
    GPIO_SIGNAL_RELAY,
	GPIO_SIGNAL_BUTTON,
    GPIO_SIGNAL_COUNT
} GpioSignal_t;

extern const GpioPinConfig_t gpio_pin_map[GPIO_SIGNAL_COUNT];

#endif

/*
 ******************************************************************************
 * @file           : Gpio.c
 * @author         : BZ
 * @brief          : Board abstraction layer
 ******************************************************************************
 */
#include "Gpio.h"
#include "Dio.h"

bool gpio_set(GpioSignal_t signal) {
    if (signal >= GPIO_SIGNAL_COUNT) return false;
    Dio_Write(&gpio_pin_map[signal], true);
    return true;
}

bool gpio_clear(GpioSignal_t signal) {
    if (signal >= GPIO_SIGNAL_COUNT) return false;
    Dio_Write(&gpio_pin_map[signal], false);
    return true;
}

void gpio_init(void) {
	for(int i=0; i<GPIO_SIGNAL_COUNT; i++) {
	        Dio_ConfigurePin(&gpio_pin_map[i]);
	    }
}

bool gpio_get(GpioSignal_t signal, bool *level) {
    if ((signal >= GPIO_SIGNAL_COUNT) || (level == NULL))
    	return false; //signal out of range or level is NULL
    //read pin state and return by *level
    *level =  Dio_Read(&gpio_pin_map[signal]);
    return true; //everything OK
}

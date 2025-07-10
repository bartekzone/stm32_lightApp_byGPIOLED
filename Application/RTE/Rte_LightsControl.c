/*
 ******************************************************************************
 * @file           : Rte_LightsControl.c
 * @author         : BZ
 * @brief          : RTE layer for GPIO call
 ******************************************************************************
 */
#include "Rte_LightsControl.h"
#include "Gpio.h"
#include "ErrorHandler.h"

void Rte_TurnOnLed(void) {
    if (!gpio_set(GPIO_SIGNAL_LED)) {
        Error_Report(ERROR_GPIO_FAILURE);
    }
}

void Rte_TurnOffLed(void) {
    if (!gpio_clear(GPIO_SIGNAL_LED)) {
        Error_Report(ERROR_GPIO_FAILURE);
    }
}

void Rte_TurnOnRelay(void) {
    if (!gpio_set(GPIO_SIGNAL_RELAY)) {
        Error_Report(ERROR_GPIO_FAILURE);
    }
}
void Rte_TurnOffRelay(void) {
    if (!gpio_clear(GPIO_SIGNAL_RELAY)) {
        Error_Report(ERROR_GPIO_FAILURE);
    }
}
void Rte_Lights_Init(void){
	// Inicjalizacja, np. GPIO/MCAL jeśli potrzebne
}

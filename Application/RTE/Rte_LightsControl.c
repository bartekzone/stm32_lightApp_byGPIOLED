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

bool Rte_CheckButton(bool *level) {
	if (!gpio_get(GPIO_SIGNAL_BUTTON, level)) {
		Error_Report(ERROR_GPIO_FAILURE);
		return false;
	}
	return true;
}
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
	// // tutaj już tylko konfiguracja logiki aplikacji, nie driverów
}

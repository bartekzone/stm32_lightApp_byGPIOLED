/*
 ******************************************************************************
 * @file           : Dio_Stm32.c
 * @author         : BZ
 * @brief          : Hardware Interface for STM32F303RE
 ******************************************************************************
 */

#include "Dio_Stm32.h"
#include "stm32f3xx.h"


static GPIO_TypeDef* Dio_GetPort(GpioPort_t port) {
    switch(port) {
        case GPIO_PORT_A:
            RCC->AHBENR |= RCC_AHBENR_GPIOAEN;
            return GPIOA;
        case GPIO_PORT_B:
            RCC->AHBENR |= RCC_AHBENR_GPIOBEN;
            return GPIOB;
        case GPIO_PORT_C:
            RCC->AHBENR |= RCC_AHBENR_GPIOCEN;
            return GPIOC;
        default:
            return NULL;
    }
}

void Dio_Stm32_ConfigurePin(const GpioPinConfig_t* pinCfg) {
    GPIO_TypeDef* gpio = Dio_GetPort(pinCfg->port);
    if(!gpio) return;

    gpio->MODER &= ~(3 << (pinCfg->pin * 2));
    gpio->MODER |= (1 << (pinCfg->pin * 2)); // output

    gpio->OTYPER &= ~(1 << pinCfg->pin);     // push-pull
    gpio->OSPEEDR &= ~(3 << (pinCfg->pin * 2)); // low speed
    gpio->PUPDR &= ~(3 << (pinCfg->pin * 2)); // no pull-up/down
}

void Dio_Stm32_Write(const GpioPinConfig_t* pinCfg, bool state) {

    GPIO_TypeDef* gpio = Dio_GetPort(pinCfg->port);
    if(!gpio) return;

    if(state)
        gpio->BSRR = (1 << pinCfg->pin);
    else
        gpio->BSRR = (1 << (pinCfg->pin + 16));
}

void Dio_Stm32_ConfigurePortA(void) {

// konfiguracja rejestru
RCC->AHBENR |= RCC_AHBENR_GPIOAEN ; //aktywuj port A
GPIOA->MODER |= GPIO_MODER_MODER5_0; //ustawienie pierwszego bitu
GPIOA->MODER &= ~(GPIO_MODER_MODER5_1); //zerowanie drugiego bitu
GPIOA->OTYPER &= ~(GPIO_OTYPER_OT_5);  //zerowanie piatego bitu
//ustawienie push/pull niepotrzebne bo po resecie jest to wartosc domyslna
GPIOA->OSPEEDR &= ~(GPIO_OSPEEDER_OSPEEDR5); //predkosc zbocza
GPIOA->PUPDR &= ~(GPIO_PUPDR_PUPDR5); //no pull/no pull down jest na plytce
}

void Dio_Stm32_WriteState_LD4(bool state) {

	if(state)
		GPIOA->BSRR |= GPIO_BSRR_BS_5;
	else
		GPIOA->BSRR |= GPIO_BSRR_BR_5;
}

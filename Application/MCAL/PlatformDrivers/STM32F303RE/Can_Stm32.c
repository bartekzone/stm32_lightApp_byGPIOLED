/*
 ******************************************************************************
 * @file           : Can_Stm32.c
 * @author         : BZ
 * @brief          : Can Hardware Interface for STM32F303RE
 ******************************************************************************
 */
#include "Can_Stm32.h"

void Can_Stm32_Init(void)
{
    // CAN Registers Init etc.
}

void Can_Stm32_Write(uint32_t id, uint8_t *data, uint8_t dlc)
{
    // HAL CAN Transmit implementation
}

void Can_Stm32_Read(uint32_t *id, uint8_t *data, uint8_t *dlc)
{
    // HAL CAN Receive implementation
}

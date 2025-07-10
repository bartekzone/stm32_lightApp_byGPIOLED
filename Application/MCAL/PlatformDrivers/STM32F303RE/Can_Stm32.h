/*
 ******************************************************************************
 * @file           : Can_Stm32.h
 * @author         : BZ
 * @brief          : Can Hardware Interface for STM32F303RE
 ******************************************************************************
 */

#ifndef CAN_STM32_H
#define CAN_STM32_H
#include <stdint.h>

void Can_Stm32_Init();
void Can_Stm32_Write(uint32_t id, uint8_t *data, uint8_t dlc);
void Can_Stm32_Read(uint32_t *id, uint8_t *data, uint8_t *dlc);

#endif

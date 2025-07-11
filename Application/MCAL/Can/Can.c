/*
 ******************************************************************************
 * @file           : Can.c
 * @author         : BZ
 * @brief          : Can Interface
 ******************************************************************************
 */
#include "ProjectConfig.h"
#include "Can.h"

#ifdef PLATFORM_STM32F3
#include "Can_Stm32.h"

void Can_Init(void) {
	Can_Stm32_Init();
}
void Can_Write(uint32_t id, uint8_t *data, uint8_t dlc) {
	Can_Stm32_Write(id, data, dlc);
}
void Can_Read(uint32_t *id, uint8_t *data, uint8_t *dlc) {
	Can_Stm32_Read(id, data, dlc);
}
#else
#error "No MCAL implementation for selected platform"
#endif

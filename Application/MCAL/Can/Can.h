/*
 ******************************************************************************
 * @file           : Can.h
 * @author         : BZ
 * @brief          : Can Interface
 ******************************************************************************
 */

#ifndef CAN_H
#define CAN_H

#include <stdint.h>
#include "Can_Cfg.h"

void Can_Init(void);
void Can_Write(uint32_t id, uint8_t *data, uint8_t dlc);
void Can_Read(uint32_t *id, uint8_t *data, uint8_t *dlc);

#endif

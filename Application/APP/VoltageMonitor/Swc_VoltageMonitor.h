/*
 ******************************************************************************
 * @file           : Swc_VoltageMonitor.h
 * @author         : BZ
 * @brief          : Includes for voltage monitor logic layer
 ******************************************************************************
 */
#ifndef SWC_VOLTAGE_MONITOR_H
#define SWC_VOLTAGE_MONITOR_H

#include "stdint.h"

#define VOLTAGE_THRESHOLD_MV   12000
void Swc_VoltageMonitor__Init(void);
void Swc_VoltageMonitor_MainFunction(void);
uint16_t Swc_VoltageMonitor_CheckVoltage(void);

#endif

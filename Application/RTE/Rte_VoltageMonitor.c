/*
 ******************************************************************************
 * @file           : Rte_VoltageMonitor.c
 * @author         : BZ
 * @brief          : RTE layer for ADC
 ******************************************************************************
 */
#include "Rte_VoltageMonitor.h"
#include "AdcIf.h"   // interfejs ADC (BSW)

uint16_t Rte_VoltageMonitor_GetVoltage(void)
{
    return AdcIf_GetVoltage();
}

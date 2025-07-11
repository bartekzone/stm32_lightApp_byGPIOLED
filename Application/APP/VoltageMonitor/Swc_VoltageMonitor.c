/*
 ******************************************************************************
 * @file           : Swc_VoltageMonitor.c
 * @author         : BZ
 * @brief          : Voltage monitor logic layer
 ******************************************************************************
 */
#include "Swc_VoltageMonitor.h"
#include "Rte_VoltageMonitor.h"
#include "Rte_EcuM.h"

void Swc_VoltageMonitor__Init(void) {

}
uint16_t Swc_VoltageMonitor_CheckVoltage(void) {
	return Rte_VoltageMonitor_GetVoltage();
}
void Swc_VoltageMonitor_MainFunction(void) {
	uint16_t voltage_mv = Swc_VoltageMonitor_CheckVoltage();

	if(voltage_mv > VOLTAGE_THRESHOLD_MV)
	    {
	        // Wyzwól zabezpieczenie np: Swc_LightsControl_TurnOffRelay();
			Rte_Call_EcuM_RequestShutdown(); // np. zmień stan na ECUM_STATE_SHUTDOWN
	    }
}


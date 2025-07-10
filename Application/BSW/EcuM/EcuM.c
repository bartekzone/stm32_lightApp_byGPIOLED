/*
 ******************************************************************************
 * @file           : EcuM.c
 * @author         : BZ
 * @brief          : ECU State Manager
 ******************************************************************************
 */
#include "EcuM.h"
#include "Gpio.h"
#include "AdcIf.h"

EcuM_StateType EcuM_CurrentState;
void EcuM_Init(void) {
	EcuM_CurrentState = ECUM_STATE_STARTUP;
	gpio_init();
	AdcIf_Init();
	EcuM_CurrentState = ECUM_STATE_RUN;
}
void EcuM_MainFunction(void) {
	switch(EcuM_CurrentState)
	    {
	        case ECUM_STATE_RUN:
	            // Normal operation
	            break;
	        case ECUM_STATE_SLEEP:
	            // Enter low-power mode
	            break;
	        case ECUM_STATE_SHUTDOWN:
	            // Perform shutdown routines
	            break;
	        default:
	            break;
	    }
}
void EcuM_RequestShutdown(void) {
	EcuM_CurrentState = ECUM_STATE_SHUTDOWN;
}

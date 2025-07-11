/*
 ******************************************************************************
 * @file           : Rte_EcuM.h
 * @author         : BZ
 * @brief          : RTE layer for EcuM
 ******************************************************************************
 */
#include "Rte_VoltageMonitor.h"
#include "EcuM.h"

/* Implementacja Client-Server call */
void Rte_Call_EcuM_RequestShutdown(void)
{
    /* Przekierowanie wywołania do BSW EcuM */
	EcuM_RequestShutdown();
}

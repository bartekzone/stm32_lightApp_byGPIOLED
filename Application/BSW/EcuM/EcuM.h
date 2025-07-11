/*
 ******************************************************************************
 * @file           : EcuM.h
 * @author         : BZ
 * @brief          : ECU State Manager
 ******************************************************************************
 */
#ifndef ECUM_H
#define ECUM_H

typedef enum {
    ECUM_STATE_STARTUP,
    ECUM_STATE_RUN,
    ECUM_STATE_SLEEP,
    ECUM_STATE_SHUTDOWN
} EcuM_StateType;

extern EcuM_StateType EcuM_CurrentState;

void EcuM_Init(void);
void EcuM_MainFunction(void);
void EcuM_RequestShutdown(void);

#endif

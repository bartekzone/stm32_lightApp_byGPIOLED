/*
 ******************************************************************************
 * @file           : ErrorHandler.c
 * @author         : BZ
 * @brief          : DET — Development Error Tracer
 ******************************************************************************
 */
#include "ErrorHandler.h"
#include <stdio.h>

void Error_Report(ErrorCode_t code) {
    switch(code) {
        case ERROR_GPIO_FAILURE:
            printf("[ERROR] GPIO failure\n");
            break;
        default:
            printf("[ERROR] Unknown error\n");
    }
}

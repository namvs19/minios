#ifndef _OS_H_
#define _OS_H_

#include "std_type.h"
#include "os_config.h"
/******************************************************************************
 * Definations
 *****************************************************************************/
typedef enum
{
    CONTROL_SPSEL_MSP = 0u,
    CONTROL_SPSEL_PSP = 2u,
} CONTROL_SPSEL_Type;

typedef enum
{
    eInactive = 0u,
    eRunning = 1u,
    eWaiting = 2u,
    eIgnore

} OS_eTaskeState_Type;

typedef void (*OS_TaskFunc_Type)(void);

typedef struct
{
    uint32_t R0;
    uint32_t R1;
    uint32_t R2;
    uint32_t R3;
    uint32_t R12;
    uint32_t LR;
    uint32_t PC;
    uint32_t xPSR;
} OS_hw_StackFrame_Type;

typedef struct
{
    uint32_t R4;
    uint32_t R5;
    uint32_t R6;
    uint32_t R7;
    uint32_t R8;
    uint32_t R9;
    uint32_t R10;
    uint32_t R11;
} OS_sw_StackFrame_Type;

typedef struct
{
    uint16_t u16StackSize;
    uint32_t u32PSP;
    OS_TaskFunc_Type TaskHandler;
    OS_eTaskeState_Type eState;
    uint8_t u8IsRunned;

} OS_Task_Type;

/******************************************************************************
 * Variable
 *****************************************************************************/
extern volatile OS_Task_Type OS_Tasks[OS_MAX_TASK];

/******************************************************************************
 * API
 *****************************************************************************/
static inline void OS_ChangeSP(CONTROL_SPSEL_Type mode)
{
    __asm("MSR CONTROL, R0");
}

uint32_t OS_WriteToR0(uint32_t value);

uint8_t OS_CreateTask(void (*TaskHandler)(void), uint16_t StackSize);

void OS_SavePrevState(uint8_t TaskID);
void OS_UnstackingSW(uint8_t TaskID);

uint32_t OS_GetPSP(uint8_t TaskID);

static inline void OS_SetPSPVal(uint8_t TaskID)
{
    OS_GetPSP(TaskID);
    __asm("MSR PSP, R0");
}

void OS_SetPendingSVC(void);

void OS_ContexSwitching(uint8_t TaskID);

#endif /* _OS_H_ */
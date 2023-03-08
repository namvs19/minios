

#include "hardware_MKL46Z4.h"
#include "std_type.h"
#include "os.h"
#include "os_config.h"

/******************************************************************************
 * Definations
 *****************************************************************************/

static uint32_t CreateStack(uint32_t StackSize);
static void SetDefaultStackFrame(uint32_t base, void (*TaskHandler)(void));
static uint32_t OS_GetPSPAddress(uint8_t TaskID);
/******************************************************************************
 * Variable
 *****************************************************************************/
volatile OS_Task_Type OS_Tasks[OS_MAX_TASK];
// static uint32_t g_u32TaskCount = 0;
static uint32_t g_u32CurrStacksEnd = OS_STACKBASE_ADDR;
/******************************************************************************
 * API
 *****************************************************************************/
uint8_t OS_CreateTask(void (*TaskHandler)(void), uint16_t StackSize)
{
    uint8_t index = 0;

    while ((index < OS_MAX_TASK) && (OS_Tasks[index].u16StackSize != 0))
    {
        index++;
    }

    if (index == OS_MAX_TASK)
    {
        while (1)
        {
        }
    }
    else
    {
        OS_Tasks[index].u16StackSize = StackSize;
        OS_Tasks[index].u32PSP = CreateStack(StackSize);
        OS_Tasks[index].TaskHandler = TaskHandler;
        OS_Tasks[index].eState = eInactive;
        OS_Tasks[index].u8IsRunned = 0;
        SetDefaultStackFrame(OS_Tasks[index].u32PSP, TaskHandler);
    }

    return index;
}

static uint32_t CreateStack(uint32_t StackSize)
{
    uint32_t SP = g_u32CurrStacksEnd - sizeof(OS_hw_StackFrame_Type);
    g_u32CurrStacksEnd += StackSize;

    if (g_u32CurrStacksEnd > OS_STACKLIMIT_ADDR)
    {
        while (1)
        {
        }
    }

    return SP;
}

static void SetDefaultStackFrame(uint32_t base, void (*TaskHandler)(void))
{
    OS_hw_StackFrame_Type *frame = (OS_hw_StackFrame_Type *)base;
    frame->R0 = 0;
    frame->R1 = 0;
    frame->R2 = 0;
    frame->R3 = 0;
    frame->R12 = 0;
    frame->LR = 0;
    frame->PC = (uint32_t)TaskHandler;
    frame->xPSR = 0x01000000U;
}

uint32_t OS_WriteToR0(uint32_t value)
{
    return value;
}

void OS_SavePrevState(uint8_t TaskID)
{

    __asm(
        "MRS R1, PSP\n"
        "SUBS R1, R1, #32\n"
        "STM R1!, {R4-R7}\n"
        "MOV R2, R8\n"
        "STR R2, [R1]\n"
        "MOV R2, R9\n"
        "STR R2, [R1, #4]\n"
        "MOV R2, R10\n"
        "STR R2, [R1, #8]\n"
        "MOV R2, R11\n"
        "STR R2, [R1, #12]\n"
        "SUBS R1, R1, #16\n"
        "MOVS R3, R1\n");

    OS_GetPSPAddress(TaskID);
    __asm("STR R3, [R0]\n");
}

void OS_UnstackingSW(uint8_t TaskID)
{
    OS_GetPSP(TaskID);

    /* Unstacking R4-R11 */
    __asm("LDM R1!, {R4-R7}\n"
          "LDR R2, [R1]\n"
          "MOV R8, R2\n"
          "LDR R2, [R1 , #4]\n"
          "MOV R9, R2\n"
          "LDR R2, [R1, #8]\n"
          "MOV R10, R2\n"
          "LDR R2, [R1, #12]\n"
          "MOV R11, R2\n"

          "ADDS R1, R1, #16\n"
          "MOVS R3, R1\n");

    OS_GetPSPAddress(TaskID);
    __asm("STR R3, [R0]");
}

uint32_t OS_GetPSP(uint8_t TaskID)
{
    return *(uint32_t *)((uint32_t)(OS_Tasks) + TaskID * sizeof(OS_Task_Type) + (sizeof(uint32_t)));
}

static uint32_t OS_GetPSPAddress(uint8_t TaskID)
{
    return (uint32_t)((uint32_t)(OS_Tasks) + TaskID * sizeof(OS_Task_Type) + (sizeof(uint32_t)));
}

void OS_SetPendingSVC(void)
{
    SCB->ICSR |= SCB_ICSR_PENDSVSET_Msk;
}

void OS_ContexSwitching(uint8_t TaskID)
{
    // uint8_t index;
    // OS_SavePrevState();
    // for (index = 0; index < OS_MAX_TASK; index++)
    // {
    //     if (index == TaskID)
    //     {
    //         OS_Tasks[index].eState = eRunning;

    //         if (OS_Tasks[index].u8IsRunned == 1u)
    //         {
    //             OS_UnstackingSW(index);
    //         }

    //         OS_Tasks[index].u8IsRunned = 1u;
    //     }
    //     else
    //     {
    //         OS_Tasks[index].eState = eInactive;
    //     }
    // }

    // OS_SetPSPVal(TaskID);
}
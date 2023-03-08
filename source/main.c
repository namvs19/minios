#include "Board.h"
#include "Timer.h"
#include "os.h"
#include "std_type.h"

void RedLedToggle(void)
{
    BOARD_RED_LED_TOGGLE;
}

void GreenLedToggle(void)
{
    BOARD_GREEN_LED_TOGGLE;
}

void GreenLed(void)
{
    Timer_InitChannel(2, RedLedToggle, CONTINUOUS);
    Timer_StartChannel(2, 500u);

    while (1)
    {
    }
}

void RedLed(void)
{
    Timer_InitChannel(3, GreenLedToggle, CONTINUOUS);
    Timer_StartChannel(3, 300u);
    while (1)
    {
    }
}

void scheduler(void);

uint8_t g_u8Task1ID;
uint8_t g_u8Task2ID;
volatile uint8_t g_u8CurrentTask = 0xFFu;

int main(void)
{

    Board_LedInit();

    OS_ChangeSP(CONTROL_SPSEL_PSP);

    g_u8Task1ID = OS_CreateTask(&GreenLed, 400u);
    g_u8Task2ID = OS_CreateTask(&RedLed, 400u);

    Timer_InitSWTimer();
    Timer_InitChannel(1, OS_SetPendingSVC, CONTINUOUS);

    NVIC_EnableIRQ(PendSV_IRQn);
    NVIC_SetPriority(PendSV_IRQn, 0xFFFF);

    Timer_StartChannel(1u, 1u);

    while (1)
    {
    }
}

void PendSV_Handler(void)
{
    uint8_t index;

    if (g_u8CurrentTask == 0xFFu)
    {
        g_u8CurrentTask = g_u8Task1ID;
    }
    else
    {
        if (OS_Tasks[g_u8CurrentTask].eState == eRunning)
        {
            OS_SavePrevState(g_u8CurrentTask);
        }

        /* Find next task */
        scheduler();

        if (OS_Tasks[g_u8CurrentTask].u8IsRunned == 1u)
        {
            OS_UnstackingSW(g_u8CurrentTask);
        }
    }

    for (index = 0; index < OS_MAX_TASK; index++)
    {
        if (index == g_u8CurrentTask)
        {
            OS_Tasks[index].eState = eRunning;
            OS_Tasks[g_u8CurrentTask].u8IsRunned = 1u;
        }
        else
        {
            OS_Tasks[index].eState = eInactive;
        }
    }

    OS_SetPSPVal(g_u8CurrentTask);
}

void scheduler(void)
{
    if (g_u8CurrentTask == g_u8Task1ID)
    {
        g_u8CurrentTask = g_u8Task2ID;
    }
    else
    {
        g_u8CurrentTask = g_u8Task1ID;
    }
}

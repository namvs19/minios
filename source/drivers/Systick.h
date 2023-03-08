#ifndef _SYSTICK_H_
#define _SYSTICK_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "hardware_MKL46Z4.h"
#include "std_type.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define SYSTICK_LOADVAL_1MS 20972U
#define SYSTICK_DEFAULT_STATE 0u

typedef enum
{
    Systick_ExtClk = 0u,
    Systick_CoreClk = 1u,
} Systick_eClkSource_Type;

/*******************************************************************************
 * API
 ******************************************************************************/
static inline void Systick_Deinit(void)
{
    SysTick->CTRL = SYSTICK_DEFAULT_STATE;
}

static inline uint32_t Systick_StartTimer(uint32_t ticks)
{
    if ((ticks - 1UL) > SysTick_LOAD_RELOAD_Msk)
    {
        return (1UL); /* Reload value impossible */
    }

    SysTick->LOAD = (uint32_t)(ticks - 1UL); /* set reload register */
    SysTick->VAL = 0UL;                      /* Load the SysTick Counter Value */
    SysTick->CTRL = SysTick_CTRL_ENABLE_Msk; /* Enable SysTick IRQ and SysTick Timer */

    return (0UL); /* Function successful */
}

static inline void Systick_StopTimer(void)
{
    SysTick->CTRL &= ~(SysTick_CTRL_ENABLE_Msk);
}

static inline void Systick_SelClkSource(Systick_eClkSource_Type source)
{
    if (source == Systick_ExtClk)
    {
        SysTick->CTRL &= ~SysTick_CTRL_CLKSOURCE_Msk;
    }
    else
    {
        SysTick->CTRL |= SysTick_CTRL_CLKSOURCE_Msk;
    }
}

static inline uint32_t Systick_GetCurrent(void)
{
    return SysTick->VAL;
}

#endif /* _SYSTICK_H_ */
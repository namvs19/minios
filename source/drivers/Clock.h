#ifndef __CLOCK_H__
#define __CLOCK_H__

#include "hardware_MKL46Z4.h"

typedef enum
{
    eDisable = 0u,
    eEnable = 1u,
} Clock_eStatus_Type;

typedef enum
{
    eEncoding_0 = 0u,
    eEncoding_1 = 1u,
    eEncoding_2 = 2u,
    eEncoding_3 = 3u,
} Clock_eClkSourceSel_Type;

typedef enum
{
    eDivide_Factor_1 = 0u,
    eDivide_Factor_2 = 1u,
    eDivide_Factor_4 = 2u,
    eDivide_Factor_8 = 3u,
    eDivide_Factor_16 = 4u,
    eDivide_Factor_32 = 5u,
    eDivide_Factor_64 = 6u,
    eDivide_Factor_128 = 7u,
} Clock_eFLLExtRedDivider_Type;

typedef enum
{
    eMCG_IRC_Slow = 0u,
    eMCG_IRC_Fast = 1u,
} Clock_eInternalRefSel_Type;

#endif /*  __CLOCK_H__ */
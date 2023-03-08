/*!
 * @file hardware_MKL46Z.h
 * @version 3.4
 * @date 2014-10-14
 * @brief CMSIS Peripheral Access Layer for MKL46Z4
 *
 * CMSIS Peripheral Access Layer for MKL46Z4
 */

#ifndef _HARDWARE_MKL46Z4_H_
#define _HARDWARE_MKL46Z4_H_

/******************************************************************************
 * Includes
 *****************************************************************************/

/** Memory map major version (memory maps with equal major version number are
 * compatible) */
#define MCU_MEM_MAP_VERSION 0x0300U
/** Memory map minor version */
#define MCU_MEM_MAP_VERSION_MINOR 0x0004U

#define REGISTER_SIZE (4u)

/* ----------------------------------------------------------------------------
   -- Interrupt vector numbers
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Interrupt_vector_numbers Interrupt vector numbers
 * @{
 */

/** Interrupt Number Definitions */
#define NUMBER_OF_INT_VECTORS 48 /**< Number of interrupts in the Vector table */

typedef enum IRQn
{
   /* Auxiliary constants */
   NotAvail_IRQn = -128, /**< Not available device specific interrupt */

   /* Core interrupts */
   NonMaskableInt_IRQn = -14, /**< Non Maskable Interrupt */
   HardFault_IRQn = -13,      /**< Cortex-M0 SV Hard Fault Interrupt */
   SVCall_IRQn = -5,          /**< Cortex-M0 SV Call Interrupt */
   PendSV_IRQn = -2,          /**< Cortex-M0 Pend SV Interrupt */
   SysTick_IRQn = -1,         /**< Cortex-M0 System Tick Interrupt */

   /* Device specific interrupts */
   DMA0_IRQn = 0,         /**< DMA channel 0 transfer complete and error interrupt */
   DMA1_IRQn = 1,         /**< DMA channel 1 transfer complete and error interrupt */
   DMA2_IRQn = 2,         /**< DMA channel 2 transfer complete and error interrupt */
   DMA3_IRQn = 3,         /**< DMA channel 3 transfer complete and error interrupt */
   Reserved20_IRQn = 4,   /**< Reserved interrupt */
   FTFA_IRQn = 5,         /**< FTFA command complete and read collision */
   LVD_LVW_IRQn = 6,      /**< Low-voltage detect, low-voltage warning */
   LLWU_IRQn = 7,         /**< Low Leakage Wakeup */
   I2C0_IRQn = 8,         /**< I2C0 interrupt */
   I2C1_IRQn = 9,         /**< I2C1 interrupt */
   SPI0_IRQn = 10,        /**< SPI0 single interrupt vector for all sources */
   SPI1_IRQn = 11,        /**< SPI1 single interrupt vector for all sources */
   UART0_IRQn = 12,       /**< UART0 status and error */
   UART1_IRQn = 13,       /**< UART1 status and error */
   UART2_IRQn = 14,       /**< UART2 status and error */
   ADC0_IRQn = 15,        /**< ADC0 interrupt */
   CMP0_IRQn = 16,        /**< CMP0 interrupt */
   TPM0_IRQn = 17,        /**< TPM0 single interrupt vector for all sources */
   TPM1_IRQn = 18,        /**< TPM1 single interrupt vector for all sources */
   TPM2_IRQn = 19,        /**< TPM2 single interrupt vector for all sources */
   RTC_IRQn = 20,         /**< RTC alarm interrupt */
   RTC_Seconds_IRQn = 21, /**< RTC seconds interrupt */
   PIT_IRQn = 22,         /**< PIT single interrupt vector for all channels */
   I2S0_IRQn = 23,        /**< I2S0 Single interrupt vector for all sources */
   USB0_IRQn = 24,        /**< USB0 OTG */
   DAC0_IRQn = 25,        /**< DAC0 interrupt */
   TSI0_IRQn = 26,        /**< TSI0 interrupt */
   MCG_IRQn = 27,         /**< MCG interrupt */
   LPTMR0_IRQn = 28,      /**< LPTMR0 interrupt */
   LCD_IRQn = 29,         /**< Segment LCD interrupt */
   PORTA_IRQn = 30,       /**< PORTA pin detect */
   PORTC_PORTD_IRQn = 31  /**< Single interrupt vector for PORTC and PORTD pin detect */
} IRQn_Type;

/*!
 * @}
 */
/* end of group Interrupt_vector_numbers */

/* ----------------------------------------------------------------------------
   -- Cortex M0 Core Configuration
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Cortex_Core_Configuration Cortex M0 Core Configuration
 * @{
 */

#define __CM0PLUS_REV 0x0000     /**< Core revision r0p0 */
#define __MPU_PRESENT 0          /**< Defines if an MPU is present or not */
#define __VTOR_PRESENT 1         /**< Defines if VTOR is present or not */
#define __NVIC_PRIO_BITS 2       /**< Number of priority bits implemented in the NVIC */
#define __Vendor_SysTickConfig 0 /**< Vendor specific implementation of SysTickConfig is defined */

#include "core_cm0plus.h"   /* Core Peripheral Access Layer */
#include "system_MKL46Z4.h" /* Device specific configuration file */

/*!
 * @}
 */
/* end of group Cortex_Core_Configuration */

/* ----------------------------------------------------------------------------
   -- Mapping Information
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- Device Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Peripheral_access_layer Device Peripheral Access Layer
 * @{
 */

/*
** Start of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
#pragma push
#pragma anon_unions
#elif defined(__CWCC__)
#pragma push
#pragma cpp_extensions on
#elif defined(__GNUC__)
/* anonymous unions are enabled by default */
#elif defined(__IAR_SYSTEMS_ICC__)
#pragma language = extended
#else
#error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- ADC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- ADC Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- CMP Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- CMP Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- DAC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- DAC Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- DMA Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- DMA Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- DMAMUX Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- DMAMUX Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- GPIO Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GPIO_Peripheral_Access_Layer GPIO Peripheral Access Layer
 * @{
 */

/** GPIO - Register Layout Typedef */
typedef struct
{
   __IO uint32_t PDOR; /**< Port Data Output Register, offset: 0x0 */
   __O uint32_t PSOR;  /**< Port Set Output Register, offset: 0x4 */
   __O uint32_t PCOR;  /**< Port Clear Output Register, offset: 0x8 */
   __O uint32_t PTOR;  /**< Port Toggle Output Register, offset: 0xC */
   __I uint32_t PDIR;  /**< Port Data Input Register, offset: 0x10 */
   __IO uint32_t PDDR; /**< Port Data Direction Register, offset: 0x14 */
} GPIO_Type;

/* ----------------------------------------------------------------------------
   -- GPIO Register Masks
   ---------------------------------------------------------------------------- */

/* GPIO - Peripheral instance base addresses */
/** Peripheral GPIOA base address */
#define GPIOA_BASE (0x400FF000u)
/** Peripheral GPIOA base pointer */
#define GPIOA ((GPIO_Type *)GPIOA_BASE)
/** Peripheral GPIOB base address */
#define GPIOB_BASE (0x400FF040u)
/** Peripheral GPIOB base pointer */
#define GPIOB ((GPIO_Type *)GPIOB_BASE)
/** Peripheral GPIOC base address */
#define GPIOC_BASE (0x400FF080u)
/** Peripheral GPIOC base pointer */
#define GPIOC ((GPIO_Type *)GPIOC_BASE)
/** Peripheral GPIOD base address */
#define GPIOD_BASE (0x400FF0C0u)
/** Peripheral GPIOD base pointer */
#define GPIOD ((GPIO_Type *)GPIOD_BASE)
/** Peripheral GPIOE base address */
#define GPIOE_BASE (0x400FF100u)
/** Peripheral GPIOE base pointer */
#define GPIOE ((GPIO_Type *)GPIOE_BASE)

/** Register address */
#define GPIO_PDOR(port) (((uint32_t)(port)) + 0 * REGISTER_SIZE)
#define GPIO_PSOR(port) (((uint32_t)(port)) + 1u * REGISTER_SIZE)
#define GPIO_PCOR(port) (((uint32_t)(port)) + 2u * REGISTER_SIZE)
#define GPIO_PTOR(port) (((uint32_t)(port)) + 3u * REGISTER_SIZE)
#define GPIO_PDIR(port) (((uint32_t)(port)) + 4u * REGISTER_SIZE)
#define GPIO_PDDR(port) (((uint32_t)(port)) + 5u * REGISTER_SIZE)

/*!
 * @}
 */
/* end of group GPIO_Peripheral_Access_Layer */

/* ----------------------------------------------------------------------------
   -- I2C Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- I2C Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- I2S Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- I2S Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- LCD Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- LCD Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- LLWU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- LLWU Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- LPTMR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- LPTMR Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- MCG Peripheral Access Layer
   ---------------------------------------------------------------------------- */
/*!
 * @addtogroup MCG_Peripheral_Access_Layer MCG Peripheral Access Layer
 * @{
 */

/** MCG - Register Layout Typedef */
typedef struct
{
   __IO uint8_t C1; /**< MCG Control 1 Register, offset: 0x0 */
   __IO uint8_t C2; /**< MCG Control 2 Register, offset: 0x1 */
   __IO uint8_t C3; /**< MCG Control 3 Register, offset: 0x2 */
   __IO uint8_t C4; /**< MCG Control 4 Register, offset: 0x3 */
   __IO uint8_t C5; /**< MCG Control 5 Register, offset: 0x4 */
   __IO uint8_t C6; /**< MCG Control 6 Register, offset: 0x5 */
   __IO uint8_t S;  /**< MCG Status Register, offset: 0x6 */
   uint8_t RESERVED_0[1];
   __IO uint8_t SC; /**< MCG Status and Control Register, offset: 0x8 */
   uint8_t RESERVED_1[1];
   __IO uint8_t ATCVH; /**< MCG Auto Trim Compare Value High Register, offset: 0xA */
   __IO uint8_t ATCVL; /**< MCG Auto Trim Compare Value Low Register, offset: 0xB */
   __IO uint8_t C7;    /**< MCG Control 7 Register, offset: 0xC */
   __IO uint8_t C8;    /**< MCG Control 8 Register, offset: 0xD */
   __I uint8_t C9;     /**< MCG Control 9 Register, offset: 0xE */
   __I uint8_t C10;    /**< MCG Control 10 Register, offset: 0xF */
} MCG_Type;
/* ----------------------------------------------------------------------------
   -- MCG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MCG_Register_Masks MCG Register Masks
 * @{
 */

/*! @name C1 - MCG Control 1 Register */
#define MCG_C1_IREFSTEN_MASK (0x1U)
#define MCG_C1_IREFSTEN_SHIFT (0U)
#define MCG_C1_IREFSTEN(x) (((uint8_t)(((uint8_t)(x)) << MCG_C1_IREFSTEN_SHIFT)) & MCG_C1_IREFSTEN_MASK)
#define MCG_C1_IRCLKEN_MASK (0x2U)
#define MCG_C1_IRCLKEN_SHIFT (1U)
#define MCG_C1_IRCLKEN(x) (((uint8_t)(((uint8_t)(x)) << MCG_C1_IRCLKEN_SHIFT)) & MCG_C1_IRCLKEN_MASK)
#define MCG_C1_IREFS_MASK (0x4U)
#define MCG_C1_IREFS_SHIFT (2U)
#define MCG_C1_IREFS(x) (((uint8_t)(((uint8_t)(x)) << MCG_C1_IREFS_SHIFT)) & MCG_C1_IREFS_MASK)
#define MCG_C1_FRDIV_MASK (0x38U)
#define MCG_C1_FRDIV_SHIFT (3U)
#define MCG_C1_FRDIV(x) (((uint8_t)(((uint8_t)(x)) << MCG_C1_FRDIV_SHIFT)) & MCG_C1_FRDIV_MASK)
#define MCG_C1_CLKS_MASK (0xC0U)
#define MCG_C1_CLKS_SHIFT (6U)
#define MCG_C1_CLKS(x) (((uint8_t)(((uint8_t)(x)) << MCG_C1_CLKS_SHIFT)) & MCG_C1_CLKS_MASK)

/*! @name C2 - MCG Control 2 Register */
#define MCG_C2_IRCS_MASK (0x1U)
#define MCG_C2_IRCS_SHIFT (0U)
#define MCG_C2_IRCS(x) (((uint8_t)(((uint8_t)(x)) << MCG_C2_IRCS_SHIFT)) & MCG_C2_IRCS_MASK)
#define MCG_C2_LP_MASK (0x2U)
#define MCG_C2_LP_SHIFT (1U)
#define MCG_C2_LP(x) (((uint8_t)(((uint8_t)(x)) << MCG_C2_LP_SHIFT)) & MCG_C2_LP_MASK)
#define MCG_C2_EREFS0_MASK (0x4U)
#define MCG_C2_EREFS0_SHIFT (2U)
#define MCG_C2_EREFS0(x) (((uint8_t)(((uint8_t)(x)) << MCG_C2_EREFS0_SHIFT)) & MCG_C2_EREFS0_MASK)
#define MCG_C2_HGO0_MASK (0x8U)
#define MCG_C2_HGO0_SHIFT (3U)
#define MCG_C2_HGO0(x) (((uint8_t)(((uint8_t)(x)) << MCG_C2_HGO0_SHIFT)) & MCG_C2_HGO0_MASK)
#define MCG_C2_RANGE0_MASK (0x30U)
#define MCG_C2_RANGE0_SHIFT (4U)
#define MCG_C2_RANGE0(x) (((uint8_t)(((uint8_t)(x)) << MCG_C2_RANGE0_SHIFT)) & MCG_C2_RANGE0_MASK)
#define MCG_C2_FCFTRIM_MASK (0x40U)
#define MCG_C2_FCFTRIM_SHIFT (6U)
#define MCG_C2_FCFTRIM(x) (((uint8_t)(((uint8_t)(x)) << MCG_C2_FCFTRIM_SHIFT)) & MCG_C2_FCFTRIM_MASK)
#define MCG_C2_LOCRE0_MASK (0x80U)
#define MCG_C2_LOCRE0_SHIFT (7U)
#define MCG_C2_LOCRE0(x) (((uint8_t)(((uint8_t)(x)) << MCG_C2_LOCRE0_SHIFT)) & MCG_C2_LOCRE0_MASK)

/*! @name C3 - MCG Control 3 Register */
#define MCG_C3_SCTRIM_MASK (0xFFU)
#define MCG_C3_SCTRIM_SHIFT (0U)
#define MCG_C3_SCTRIM(x) (((uint8_t)(((uint8_t)(x)) << MCG_C3_SCTRIM_SHIFT)) & MCG_C3_SCTRIM_MASK)

/*! @name C4 - MCG Control 4 Register */
#define MCG_C4_SCFTRIM_MASK (0x1U)
#define MCG_C4_SCFTRIM_SHIFT (0U)
#define MCG_C4_SCFTRIM(x) (((uint8_t)(((uint8_t)(x)) << MCG_C4_SCFTRIM_SHIFT)) & MCG_C4_SCFTRIM_MASK)
#define MCG_C4_FCTRIM_MASK (0x1EU)
#define MCG_C4_FCTRIM_SHIFT (1U)
#define MCG_C4_FCTRIM(x) (((uint8_t)(((uint8_t)(x)) << MCG_C4_FCTRIM_SHIFT)) & MCG_C4_FCTRIM_MASK)
#define MCG_C4_DRST_DRS_MASK (0x60U)
#define MCG_C4_DRST_DRS_SHIFT (5U)
#define MCG_C4_DRST_DRS(x) (((uint8_t)(((uint8_t)(x)) << MCG_C4_DRST_DRS_SHIFT)) & MCG_C4_DRST_DRS_MASK)
#define MCG_C4_DMX32_MASK (0x80U)
#define MCG_C4_DMX32_SHIFT (7U)
#define MCG_C4_DMX32(x) (((uint8_t)(((uint8_t)(x)) << MCG_C4_DMX32_SHIFT)) & MCG_C4_DMX32_MASK)

/*! @name C5 - MCG Control 5 Register */
#define MCG_C5_PRDIV0_MASK (0x1FU)
#define MCG_C5_PRDIV0_SHIFT (0U)
#define MCG_C5_PRDIV0(x) (((uint8_t)(((uint8_t)(x)) << MCG_C5_PRDIV0_SHIFT)) & MCG_C5_PRDIV0_MASK)
#define MCG_C5_PLLSTEN0_MASK (0x20U)
#define MCG_C5_PLLSTEN0_SHIFT (5U)
#define MCG_C5_PLLSTEN0(x) (((uint8_t)(((uint8_t)(x)) << MCG_C5_PLLSTEN0_SHIFT)) & MCG_C5_PLLSTEN0_MASK)
#define MCG_C5_PLLCLKEN0_MASK (0x40U)
#define MCG_C5_PLLCLKEN0_SHIFT (6U)
#define MCG_C5_PLLCLKEN0(x) (((uint8_t)(((uint8_t)(x)) << MCG_C5_PLLCLKEN0_SHIFT)) & MCG_C5_PLLCLKEN0_MASK)

/*! @name C6 - MCG Control 6 Register */
#define MCG_C6_VDIV0_MASK (0x1FU)
#define MCG_C6_VDIV0_SHIFT (0U)
#define MCG_C6_VDIV0(x) (((uint8_t)(((uint8_t)(x)) << MCG_C6_VDIV0_SHIFT)) & MCG_C6_VDIV0_MASK)
#define MCG_C6_CME0_MASK (0x20U)
#define MCG_C6_CME0_SHIFT (5U)
#define MCG_C6_CME0(x) (((uint8_t)(((uint8_t)(x)) << MCG_C6_CME0_SHIFT)) & MCG_C6_CME0_MASK)
#define MCG_C6_PLLS_MASK (0x40U)
#define MCG_C6_PLLS_SHIFT (6U)
#define MCG_C6_PLLS(x) (((uint8_t)(((uint8_t)(x)) << MCG_C6_PLLS_SHIFT)) & MCG_C6_PLLS_MASK)
#define MCG_C6_LOLIE0_MASK (0x80U)
#define MCG_C6_LOLIE0_SHIFT (7U)
#define MCG_C6_LOLIE0(x) (((uint8_t)(((uint8_t)(x)) << MCG_C6_LOLIE0_SHIFT)) & MCG_C6_LOLIE0_MASK)

/*! @name S - MCG Status Register */
#define MCG_S_IRCST_MASK (0x1U)
#define MCG_S_IRCST_SHIFT (0U)
#define MCG_S_IRCST(x) (((uint8_t)(((uint8_t)(x)) << MCG_S_IRCST_SHIFT)) & MCG_S_IRCST_MASK)
#define MCG_S_OSCINIT0_MASK (0x2U)
#define MCG_S_OSCINIT0_SHIFT (1U)
#define MCG_S_OSCINIT0(x) (((uint8_t)(((uint8_t)(x)) << MCG_S_OSCINIT0_SHIFT)) & MCG_S_OSCINIT0_MASK)
#define MCG_S_CLKST_MASK (0xCU)
#define MCG_S_CLKST_SHIFT (2U)
#define MCG_S_CLKST(x) (((uint8_t)(((uint8_t)(x)) << MCG_S_CLKST_SHIFT)) & MCG_S_CLKST_MASK)
#define MCG_S_IREFST_MASK (0x10U)
#define MCG_S_IREFST_SHIFT (4U)
#define MCG_S_IREFST(x) (((uint8_t)(((uint8_t)(x)) << MCG_S_IREFST_SHIFT)) & MCG_S_IREFST_MASK)
#define MCG_S_PLLST_MASK (0x20U)
#define MCG_S_PLLST_SHIFT (5U)
#define MCG_S_PLLST(x) (((uint8_t)(((uint8_t)(x)) << MCG_S_PLLST_SHIFT)) & MCG_S_PLLST_MASK)
#define MCG_S_LOCK0_MASK (0x40U)
#define MCG_S_LOCK0_SHIFT (6U)
#define MCG_S_LOCK0(x) (((uint8_t)(((uint8_t)(x)) << MCG_S_LOCK0_SHIFT)) & MCG_S_LOCK0_MASK)
#define MCG_S_LOLS0_MASK (0x80U)
#define MCG_S_LOLS0_SHIFT (7U)
#define MCG_S_LOLS0(x) (((uint8_t)(((uint8_t)(x)) << MCG_S_LOLS0_SHIFT)) & MCG_S_LOLS0_MASK)

/*! @name SC - MCG Status and Control Register */
#define MCG_SC_LOCS0_MASK (0x1U)
#define MCG_SC_LOCS0_SHIFT (0U)
#define MCG_SC_LOCS0(x) (((uint8_t)(((uint8_t)(x)) << MCG_SC_LOCS0_SHIFT)) & MCG_SC_LOCS0_MASK)
#define MCG_SC_FCRDIV_MASK (0xEU)
#define MCG_SC_FCRDIV_SHIFT (1U)
#define MCG_SC_FCRDIV(x) (((uint8_t)(((uint8_t)(x)) << MCG_SC_FCRDIV_SHIFT)) & MCG_SC_FCRDIV_MASK)
#define MCG_SC_FLTPRSRV_MASK (0x10U)
#define MCG_SC_FLTPRSRV_SHIFT (4U)
#define MCG_SC_FLTPRSRV(x) (((uint8_t)(((uint8_t)(x)) << MCG_SC_FLTPRSRV_SHIFT)) & MCG_SC_FLTPRSRV_MASK)
#define MCG_SC_ATMF_MASK (0x20U)
#define MCG_SC_ATMF_SHIFT (5U)
#define MCG_SC_ATMF(x) (((uint8_t)(((uint8_t)(x)) << MCG_SC_ATMF_SHIFT)) & MCG_SC_ATMF_MASK)
#define MCG_SC_ATMS_MASK (0x40U)
#define MCG_SC_ATMS_SHIFT (6U)
#define MCG_SC_ATMS(x) (((uint8_t)(((uint8_t)(x)) << MCG_SC_ATMS_SHIFT)) & MCG_SC_ATMS_MASK)
#define MCG_SC_ATME_MASK (0x80U)
#define MCG_SC_ATME_SHIFT (7U)
#define MCG_SC_ATME(x) (((uint8_t)(((uint8_t)(x)) << MCG_SC_ATME_SHIFT)) & MCG_SC_ATME_MASK)

/*! @name ATCVH - MCG Auto Trim Compare Value High Register */
#define MCG_ATCVH_ATCVH_MASK (0xFFU)
#define MCG_ATCVH_ATCVH_SHIFT (0U)
#define MCG_ATCVH_ATCVH(x) (((uint8_t)(((uint8_t)(x)) << MCG_ATCVH_ATCVH_SHIFT)) & MCG_ATCVH_ATCVH_MASK)

/*! @name ATCVL - MCG Auto Trim Compare Value Low Register */
#define MCG_ATCVL_ATCVL_MASK (0xFFU)
#define MCG_ATCVL_ATCVL_SHIFT (0U)
#define MCG_ATCVL_ATCVL(x) (((uint8_t)(((uint8_t)(x)) << MCG_ATCVL_ATCVL_SHIFT)) & MCG_ATCVL_ATCVL_MASK)

/*! @name C7 - MCG Control 7 Register */
#define MCG_C7_OSCSEL_MASK (0x1U)
#define MCG_C7_OSCSEL_SHIFT (0U)
#define MCG_C7_OSCSEL(x) (((uint8_t)(((uint8_t)(x)) << MCG_C7_OSCSEL_SHIFT)) & MCG_C7_OSCSEL_MASK)

/*! @name C8 - MCG Control 8 Register */
#define MCG_C8_LOLRE_MASK (0x40U)
#define MCG_C8_LOLRE_SHIFT (6U)
#define MCG_C8_LOLRE(x) (((uint8_t)(((uint8_t)(x)) << MCG_C8_LOLRE_SHIFT)) & MCG_C8_LOLRE_MASK)

/*!
 * @}
 */
/* end of group MCG_Register_Masks */

/* MCG - Peripheral instance base addresses */
/** Peripheral MCG base address */
#define MCG_BASE (0x40064000u)
/** Peripheral MCG base pointer */
#define MCG ((MCG_Type *)MCG_BASE)
/** Array initializer of MCG peripheral base addresses */
#define MCG_BASE_ADDRS \
   {                   \
      MCG_BASE         \
   }
/** Array initializer of MCG peripheral base pointers */
#define MCG_BASE_PTRS \
   {                  \
      MCG             \
   }
/** Interrupt vectors for the MCG peripheral type */
#define MCG_IRQS \
   {             \
      MCG_IRQn   \
   }
/* MCG C2[EREFS] backward compatibility */
#define MCG_C2_EREFS_MASK (MCG_C2_EREFS0_MASK)
#define MCG_C2_EREFS_SHIFT (MCG_C2_EREFS0_SHIFT)
#define MCG_C2_EREFS_WIDTH (MCG_C2_EREFS0_WIDTH)
#define MCG_C2_EREFS(x) (MCG_C2_EREFS0(x))

/* MCG C2[HGO] backward compatibility */
#define MCG_C2_HGO_MASK (MCG_C2_HGO0_MASK)
#define MCG_C2_HGO_SHIFT (MCG_C2_HGO0_SHIFT)
#define MCG_C2_HGO_WIDTH (MCG_C2_HGO0_WIDTH)
#define MCG_C2_HGO(x) (MCG_C2_HGO0(x))

/* MCG C2[RANGE] backward compatibility */
#define MCG_C2_RANGE_MASK (MCG_C2_RANGE0_MASK)
#define MCG_C2_RANGE_SHIFT (MCG_C2_RANGE0_SHIFT)
#define MCG_C2_RANGE_WIDTH (MCG_C2_RANGE0_WIDTH)
#define MCG_C2_RANGE(x) (MCG_C2_RANGE0(x))

/*!
 * @}
 */
/* end of group MCG_Peripheral_Access_Layer */

/* ----------------------------------------------------------------------------
   -- MCM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- MCM Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- MTB Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- MTB Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- MTBDWT Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- MTBDWT Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- NV Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- NV Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- OSC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- OSC Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- PIT Peripheral Access Layer
   ---------------------------------------------------------------------------- */
/*!
 * @addtogroup PIT_Peripheral_Access_Layer PIT Peripheral Access Layer
 * @{
 */

/** PIT - Register Layout Typedef */
typedef struct
{
   __IO uint32_t MCR; /**< PIT Module Control Register, offset: 0x0 */
   uint8_t RESERVED_0[220];
   __I uint32_t LTMR64H; /**< PIT Upper Lifetime Timer Register, offset: 0xE0 */
   __I uint32_t LTMR64L; /**< PIT Lower Lifetime Timer Register, offset: 0xE4 */
   uint8_t RESERVED_1[24];
   struct
   {                       /* offset: 0x100, array step: 0x10 */
      __IO uint32_t LDVAL; /**< Timer Load Value Register, array offset: 0x100, array step: 0x10 */
      __I uint32_t CVAL;   /**< Current Timer Value Register, array offset: 0x104, array step: 0x10 */
      __IO uint32_t TCTRL; /**< Timer Control Register, array offset: 0x108, array step: 0x10 */
      __IO uint32_t TFLG;  /**< Timer Flag Register, array offset: 0x10C, array step: 0x10 */
   } CHANNEL[2];
} PIT_Type;

/* ----------------------------------------------------------------------------
   -- PIT Register Masks
   ---------------------------------------------------------------------------- */
/*!
 * @addtogroup PIT_Register_Masks PIT Register Masks
 * @{
 */

/*! @name MCR - PIT Module Control Register */
#define PIT_MCR_FRZ_MASK (0x1u)
#define PIT_MCR_FRZ_SHIFT (0u)
#define PIT_MCR_FRZ(x) (((uint32_t)(((uint32_t)(x)) << PIT_MCR_FRZ_SHIFT)) & PIT_MCR_FRZ_MASK)
#define PIT_MCR_MDIS_MASK (0x2u)
#define PIT_MCR_MDIS_SHIFT (1u)
#define PIT_MCR_MDIS(x) (((uint32_t)(((uint32_t)(x)) << PIT_MCR_MDIS_SHIFT)) & PIT_MCR_MDIS_MASK)

/*! @name LTMR64H - PIT Upper Lifetime Timer Register */
#define PIT_LTMR64H_LTH(x) ((uint32_t)(x))

/*! @name LTMR64L - PIT Lower Lifetime Timer Register */
#define PIT_LTMR64H_LTL(x) ((uint32_t)(x))

/*! @name LDVAL - Timer Load Value Register */
#define PIT_LDVAL_TSV(x) ((uint32_t)(x))

/* The count of PIT_LDVAL */
#define PIT_LDVAL_COUNT (2U)

/*! @name CVAL - Current Timer Value Register */
#define PIT_CVAL_TVL(x) (((uint32_t)(((uint32_t)(x)) << PIT_CVAL_TVL_SHIFT)) & PIT_CVAL_TVL_MASK)

/* The count of PIT_CVAL */
#define PIT_CVAL_COUNT (2U)
/*! @name CVAL - Current Timer Value Register */

/*! @name TCTRL - Timer Control Register */
#define PIT_TCTRL_TEN_MASK (0x1U)
#define PIT_TCTRL_TEN_SHIFT (0U)
#define PIT_TCTRL_TEN(x) (((uint32_t)(((uint32_t)(x)) << PIT_TCTRL_TEN_SHIFT)) & PIT_TCTRL_TEN_MASK)
#define PIT_TCTRL_TIE_MASK (0x2U)
#define PIT_TCTRL_TIE_SHIFT (1U)
#define PIT_TCTRL_TIE(x) (((uint32_t)(((uint32_t)(x)) << PIT_TCTRL_TIE_SHIFT)) & PIT_TCTRL_TIE_MASK)
#define PIT_TCTRL_CHN_MASK (0x4U)
#define PIT_TCTRL_CHN_SHIFT (2U)
#define PIT_TCTRL_CHN(x) (((uint32_t)(((uint32_t)(x)) << PIT_TCTRL_CHN_SHIFT)) & PIT_TCTRL_CHN_MASK)

/* The count of PIT_TCTRL */
#define PIT_TCTRL_COUNT (2U)

/*! @name TFLG - Timer Flag Register */
#define PIT_TFLG_TIF_MASK (0x1U)
#define PIT_TFLG_TIF_SHIFT (0U)
#define PIT_TFLG_TIF(x) (((uint32_t)(((uint32_t)(x)) << PIT_TFLG_TIF_SHIFT)) & PIT_TFLG_TIF_MASK)

/* The count of PIT_TFLG */
#define PIT_TFLG_COUNT (2U)

/*!
 * @}
 */
/* end of group PIT_Register_Masks */

/* PIT - Peripheral instance base addresses */
/** Peripheral PIT base address */
#define PIT_BASE (0x40037000u)
/** Peripheral PIT base pointer */
#define PIT ((PIT_Type *)PIT_BASE)
/** Array initializer of PIT peripheral base addresses */

/* ----------------------------------------------------------------------------
   -- PMC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- PMC Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- PORT Peripheral Access Layer
   ---------------------------------------------------------------------------- */
/*!
 * @addtogroup PORT_Peripheral_Access_Layer PORT Peripheral Access Layer
 * @{
 */

/** PORT - Register Layout Typedef */
typedef struct
{
   __IO uint32_t PCR[32]; /**< Pin Control Register n, array offset: 0x0, array step: 0x4 */
   __O uint32_t GPCLR;    /**< Global Pin Control Low Register, offset: 0x80 */
   __O uint32_t GPCHR;    /**< Global Pin Control High Register, offset: 0x84 */
   uint8_t RESERVED_0[24];
   __IO uint32_t ISFR; /**< Interrupt Status Flag Register, offset: 0xA0 */
} PORT_Type;

/* ----------------------------------------------------------------------------
   -- PORT Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PORT_Register_Masks PORT Register Masks
 * @{
 */

/* PORT Register Masks */
#define PORT_PCR_PS_MASK (0x1U)
#define PORT_PCR_PS_SHIFT (0U)
#define PORT_PCR_PS(x) (((uint32_t)(((uint32_t)(x)) << PORT_PCR_PS_SHIFT)) & PORT_PCR_PS_MASK)
#define PORT_PCR_PE_MASK (0x2U)
#define PORT_PCR_PE_SHIFT (1U)
#define PORT_PCR_PE(x) (((uint32_t)(((uint32_t)(x)) << PORT_PCR_PE_SHIFT)) & PORT_PCR_PE_MASK)
#define PORT_PCR_MUX_MASK (0x700u)
#define PORT_PCR_MUX_SHIFT (8u)
#define PORT_PCR_MUX(x) ((uint32_t)(((uint32_t)(x) << PORT_PCR_MUX_SHIFT) & PORT_PCR_MUX_MASK))

#define PORT_PCR_IRQC_MASK (0xF0000U)
#define PORT_PCR_IRQC_SHIFT (16U)
#define PORT_PCR_IRQC(x) (((uint32_t)(((uint32_t)(x)) << PORT_PCR_IRQC_SHIFT)) & PORT_PCR_IRQC_MASK)

/* Interrupt configuration  */
#define IRQC_DMA_DISABLE (0)
#define IRQC_DMA_RISING (1U)
#define IRQC_DMA_FALLING (2U)
#define IRQC_DMA_CHANGE (3U)
#define IRQC_LOGIC_ZERO (8U)
#define IRQC_RISING (9U)
#define IRQC_FALLING (10U)
#define IRQC_CHANGE (11U)
#define IRQC_LOGIC_ONE (12U)

/* PORT - Peripheral instance base addresses */
/** Peripheral PORTA base address */
#define PORTA_BASE (0x40049000u)
/** Peripheral PORTA base pointer */
#define PORTA ((PORT_Type *)PORTA_BASE)
/** Peripheral PORTB base address */
#define PORTB_BASE (0x4004A000u)
/** Peripheral PORTB base pointer */
#define PORTB ((PORT_Type *)PORTB_BASE)
/** Peripheral PORTC base address */
#define PORTC_BASE (0x4004B000u)
/** Peripheral PORTC base pointer */
#define PORTC ((PORT_Type *)PORTC_BASE)
/** Peripheral PORTD base address */
#define PORTD_BASE (0x4004C000u)
/** Peripheral PORTD base pointer */
#define PORTD ((PORT_Type *)PORTD_BASE)
/** Peripheral PORTE base address */
#define PORTE_BASE (0x4004D000u)
/** Peripheral PORTE base pointer */
#define PORTE ((PORT_Type *)PORTE_BASE)

/* PORT - Register Address */
#define PORT_NUMBER_SIZE (5u)
#define PORT_NUMBER_PIN_PER_PORT (32u)

#define PORT_PCR(port, pin) ((uint32_t)(port) + REGISTER_SIZE * (pin))
#define PORT_GPCLR(port) ((uint32_t)(port) + 0x80u)
#define PORT_GPCHR(port) ((uint32_t)(port) + 0x84u)
#define PORT_ISFR(port) ((uint32_t)(port) + 0xA0u)

/*!
 * @}
 */
/* end of group PORT_Peripheral_Access_Layer */

/* ----------------------------------------------------------------------------
   -- RCM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- RCM Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- ROM Peripheral Access Layer
   ---------------------------------------------------------------------------- */
/* ----------------------------------------------------------------------------
   -- ROM Register Masks
   ---------------------------------------------------------------------------- */
/* ----------------------------------------------------------------------------
   -- RTC Peripheral Access Layer
   ---------------------------------------------------------------------------- */
/* ----------------------------------------------------------------------------
   -- RTC Register Masks
   ---------------------------------------------------------------------------- */
/* ----------------------------------------------------------------------------
   -- SIM Peripheral Access Layer
   ---------------------------------------------------------------------------- */
/*!
 * @addtogroup SIM_Peripheral_Access_Layer SIM Peripheral Access Layer
 * @{
 */
/** SIM - Register Layout Typedef */

typedef struct
{
   __IO uint32_t SOPT1;    /**< System Options Register 1, offset: 0x0 */
   __IO uint32_t SOPT1CFG; /**< SOPT1 Configuration Register, offset: 0x4 */
   uint8_t RESERVED_0[4092];
   __IO uint32_t SOPT2; /**< System Options Register 2, offset: 0x1004 */
   uint8_t RESERVED_1[4];
   __IO uint32_t SOPT4; /**< System Options Register 4, offset: 0x100C */
   __IO uint32_t SOPT5; /**< System Options Register 5, offset: 0x1010 */
   uint8_t RESERVED_2[4];
   __IO uint32_t SOPT7; /**< System Options Register 7, offset: 0x1018 */
   uint8_t RESERVED_3[8];
   __I uint32_t SDID; /**< System Device Identification Register, offset: 0x1024 */
   uint8_t RESERVED_4[12];
   __IO uint32_t SCGC4;   /**< System Clock Gating Control Register 4, offset: 0x1034 */
   __IO uint32_t SCGC5;   /**< System Clock Gating Control Register 5, offset: 0x1038 */
   __IO uint32_t SCGC6;   /**< System Clock Gating Control Register 6, offset: 0x103C */
   __IO uint32_t SCGC7;   /**< System Clock Gating Control Register 7, offset: 0x1040 */
   __IO uint32_t CLKDIV1; /**< System Clock Divider Register 1, offset: 0x1044 */
   uint8_t RESERVED_5[4];
   __IO uint32_t FCFG1; /**< Flash Configuration Register 1, offset: 0x104C */
   __I uint32_t FCFG2;  /**< Flash Configuration Register 2, offset: 0x1050 */
   uint8_t RESERVED_6[4];
   __I uint32_t UIDMH; /**< Unique Identification Register Mid-High, offset: 0x1058 */
   __I uint32_t UIDML; /**< Unique Identification Register Mid Low, offset: 0x105C */
   __I uint32_t UIDL;  /**< Unique Identification Register Low, offset: 0x1060 */
   uint8_t RESERVED_7[156];
   __IO uint32_t COPC;  /**< COP Control Register, offset: 0x1100 */
   __O uint32_t SRVCOP; /**< Service COP, offset: 0x1104 */
} SIM_Type;

/* ----------------------------------------------------------------------------
   -- SIM Register Masks
   ---------------------------------------------------------------------------- */
/*! @name SCGC5 - System Clock Gating Control Register 5 */
#define SIM_SCGC5_PORTA_SHIFT (9u)
#define SIM_SCGC5_PORTA_MASK ((uint32_t)(1u << SIM_SCGC5_PORTA_SHIFT))
#define SIM_SCGC5_PORTB_SHIFT (10u)
#define SIM_SCGC5_PORTB_MASK ((uint32_t)(1u << SIM_SCGC5_PORTB_SHIFT))
#define SIM_SCGC5_PORTC_SHIFT (11u)
#define SIM_SCGC5_PORTC_MASK ((uint32_t)(1u << SIM_SCGC5_PORTC_SHIFT))
#define SIM_SCGC5_PORTD_SHIFT (12u)
#define SIM_SCGC5_PORTD_MASK ((uint32_t)(1u << SIM_SCGC5_PORTD_SHIFT))
#define SIM_SCGC5_PORTE_SHIFT (13u)
#define SIM_SCGC5_PORTE_MASK ((uint32_t)(1u << SIM_SCGC5_PORTE_SHIFT))

/*! @name CLKDIV1 - System Clock Divider Register 1 */
#define SIM_CLKDIV1_OUTDIV4_MASK (0x70000U)
#define SIM_CLKDIV1_OUTDIV4_SHIFT (16U)
#define SIM_CLKDIV1_OUTDIV4(x) (((uint32_t)(((uint32_t)(x)) << SIM_CLKDIV1_OUTDIV4_SHIFT)) & SIM_CLKDIV1_OUTDIV4_MASK)
#define SIM_CLKDIV1_OUTDIV1_MASK (0xF0000000U)
#define SIM_CLKDIV1_OUTDIV1_SHIFT (28U)
#define SIM_CLKDIV1_OUTDIV1(x) (((uint32_t)(((uint32_t)(x)) << SIM_CLKDIV1_OUTDIV1_SHIFT)) & SIM_CLKDIV1_OUTDIV1_MASK)

/*!
 * @}
 */
/* end of group SIM_Register_Masks */

/* SIM - Peripheral instance base addresses */
/** Peripheral SIM base address */
#define SIM_BASE (0x40047000u)
/** Peripheral SIM base pointer */
#define SIM ((SIM_Type *)SIM_BASE)

/*!
 * @}
 */
/* end of group SIM_Peripheral_Access_Layer */

/* ----------------------------------------------------------------------------
   -- SMC Peripheral Access Layer
   ---------------------------------------------------------------------------- */
/* ----------------------------------------------------------------------------
   -- SMC Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- SPI Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- SPI Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- TPM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- TPM Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- TSI Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- TSI Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- UART Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- UART Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- UART0 Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- UART0 Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- USB Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- USB Register Masks
   ---------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
   -- SDK Compatibility
   ---------------------------------------------------------------------------- */

#endif /* _HARDWARE_MKL46Z4_H_ */

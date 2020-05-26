/*
*********************************************************************************************************
*                                             EXAMPLE CODE
*********************************************************************************************************
* Licensing:
*   The licensor of this EXAMPLE CODE is Silicon Laboratories Inc.
*
*   Silicon Laboratories Inc. grants you a personal, worldwide, royalty-free, fully paid-up license to
*   use, copy, modify and distribute the EXAMPLE CODE software, or portions thereof, in any of your
*   products.
*
*   Your use of this EXAMPLE CODE is at your own risk. This EXAMPLE CODE does not come with any
*   warranties, and the licensor disclaims all implied warranties concerning performance, accuracy,
*   non-infringement, merchantability and fitness for your application.
*
*   The EXAMPLE CODE is provided "AS IS" and does not come with any support.
*
*   You can find user manuals, API references, release notes and more at: https://doc.micrium.com
*
*   You can contact us at: https://www.micrium.com
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                               LED BSP
*
*                                            SILICON LABS
*                                          EFM32LG-STK3600
*
* File : bsp_led.h
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*********************************************************************************************************
*                                                MODULE
*********************************************************************************************************
*********************************************************************************************************
*/

#ifndef  _BSP_LED_H_
#define  _BSP_LED_H_


/*
*********************************************************************************************************
*********************************************************************************************************
*                                             INCLUDE FILES
*********************************************************************************************************
*********************************************************************************************************
*/

#include  <cpu/include/cpu.h>

                                                                /* Third-party includes                                 */
#include  "em_gpio.h"
#include  "em_cmu.h"



/*
*********************************************************************************************************
*********************************************************************************************************
*                                               DEFINES
*********************************************************************************************************
*********************************************************************************************************
*/

#define  BSP_NUM_LEDS                           2               /* Total number of LEDs on Wonder Gecko Starter Kit      */


/*
*********************************************************************************************************
*********************************************************************************************************
*                                          FUNCTION PROTOTYPES
*********************************************************************************************************
*********************************************************************************************************
*/

void  BSP_LED_Init  (void);

void  BSP_LED_On    (CPU_INT08U  led);

void  BSP_LED_Off   (CPU_INT08U  led);

void  BSP_LED_Toggle(CPU_INT08U  led);


/*
*********************************************************************************************************
*********************************************************************************************************
*                                              MODULE END
*********************************************************************************************************
*********************************************************************************************************
*/

#endif                                                          /* End of module include.                               */



#ifndef HAL_CONFIG_BOARD_H
#define HAL_CONFIG_BOARD_H

#include "em_device.h"
#include "hal-config-types.h"

// This file is auto-generated by Hardware Configurator in Simplicity Studio.
// Any content between $[ and ]$ will be replaced whenever the file is regenerated.
// Content outside these regions will be preserved.

// $[ACMP0]
// [ACMP0]$

// $[ACMP1]
// [ACMP1]$

// $[ADC0]
// [ADC0]$

// $[BTL_BUTTON]

#define BSP_BTL_BUTTON_PIN                   (5U)
#define BSP_BTL_BUTTON_PORT                  (gpioPortD)

// [BTL_BUTTON]$

// $[BUTTON]
#define BSP_BUTTON_PRESENT                   (1)

#define BSP_BUTTON0_PIN                      (5U)
#define BSP_BUTTON0_PORT                     (gpioPortD)

#define BSP_BUTTON1_PIN                      (9U)
#define BSP_BUTTON1_PORT                     (gpioPortC)

#define BSP_BUTTON_COUNT                     (2U)
#define BSP_BUTTON_INIT                      { { BSP_BUTTON0_PORT, BSP_BUTTON0_PIN }, { BSP_BUTTON1_PORT, BSP_BUTTON1_PIN } }
#define BSP_BUTTON_GPIO_DOUT                 (HAL_GPIO_DOUT_LOW)
#define BSP_BUTTON_GPIO_MODE                 (HAL_GPIO_MODE_INPUT)
// [BUTTON]$

// $[CAN0]
// [CAN0]$

// $[CMU]
#define BSP_CLK_LFXO_PRESENT                 (1)
#define BSP_CLK_HFXO_PRESENT                 (1)
#define BSP_CLK_LFXO_INIT                     CMU_LFXOINIT_DEFAULT
#define BSP_CLK_LFXO_CTUNE                   (32U)
#define BSP_CLK_LFXO_FREQ                    (32768U)
#define BSP_CLK_HFXO_FREQ                    (48000000UL)
#define BSP_CLK_HFXO_CTUNE                   (322)
#define BSP_CLK_HFXO_INIT                     CMU_HFXOINIT_DEFAULT
// [CMU]$

// $[CSEN]
// [CSEN]$

// $[DCDC]
#define BSP_DCDC_PRESENT                     (1)

#define BSP_DCDC_INIT                         EMU_DCDCINIT_DEFAULT
// [DCDC]$

// $[EMU]
// [EMU]$

// $[EXTFLASH]
// [EXTFLASH]$

// $[GPIO]
// [GPIO]$

// $[I2C0]
#define PORTIO_I2C0_SCL_PIN                  (7U)
#define PORTIO_I2C0_SCL_PORT                 (gpioPortD)
#define PORTIO_I2C0_SCL_LOC                  (1U)

#define PORTIO_I2C0_SDA_PIN                  (6U)
#define PORTIO_I2C0_SDA_PORT                 (gpioPortD)
#define PORTIO_I2C0_SDA_LOC                  (1U)

#define BSP_I2C0_SDA_PIN                     (6U)
#define BSP_I2C0_SDA_PORT                    (gpioPortD)
#define BSP_I2C0_SDA_LOC                     (1U)

#define BSP_I2C0_SCL_PIN                     (7U)
#define BSP_I2C0_SCL_PORT                    (gpioPortD)
#define BSP_I2C0_SCL_LOC                     (1U)

// [I2C0]$

// $[I2C1]
// [I2C1]$

// $[I2CSENSOR]

#define BSP_I2CSENSOR_ENABLE_PIN             (12U)
#define BSP_I2CSENSOR_ENABLE_PORT            (gpioPortC)

#define BSP_I2CSENSOR_PERIPHERAL             (HAL_I2C_PORT_I2C0)
#define BSP_I2CSENSOR_SDA_PIN                (6U)
#define BSP_I2CSENSOR_SDA_PORT               (gpioPortD)
#define BSP_I2CSENSOR_SDA_LOC                (1U)

#define BSP_I2CSENSOR_SCL_PIN                (7U)
#define BSP_I2CSENSOR_SCL_PORT               (gpioPortD)
#define BSP_I2CSENSOR_SCL_LOC                (1U)

// [I2CSENSOR]$

// $[IOEXP]
// [IOEXP]$

// $[LCD]
// [LCD]$

// $[LED]
#define BSP_LED_PRESENT                      (1)

#define BSP_LED0_PIN                         (2U)
#define BSP_LED0_PORT                        (gpioPortD)

#define BSP_LED1_PIN                         (2U)
#define BSP_LED1_PORT                        (gpioPortC)

#define BSP_LED_COUNT                        (2U)
#define BSP_LED_INIT                         { { BSP_LED0_PORT, BSP_LED0_PIN }, { BSP_LED1_PORT, BSP_LED1_PIN } }
// [LED]$

// $[LESENSE]
// [LESENSE]$

// $[LETIMER0]
// [LETIMER0]$

// $[LEUART0]
#define PORTIO_LEUART0_RX_PIN                (15U)
#define PORTIO_LEUART0_RX_PORT               (gpioPortC)
#define PORTIO_LEUART0_RX_LOC                (5U)

#define PORTIO_LEUART0_TX_PIN                (14U)
#define PORTIO_LEUART0_TX_PORT               (gpioPortC)
#define PORTIO_LEUART0_TX_LOC                (5U)

#define BSP_LEUART0_RX_PIN                   (15U)
#define BSP_LEUART0_RX_PORT                  (gpioPortC)
#define BSP_LEUART0_RX_LOC                   (5U)

#define BSP_LEUART0_TX_PIN                   (14U)
#define BSP_LEUART0_TX_PORT                  (gpioPortC)
#define BSP_LEUART0_TX_LOC                   (5U)

// [LEUART0]$

// $[LFXO]
// [LFXO]$

// $[PCNT0]
// [PCNT0]$

// $[PORTIO]
// [PORTIO]$

// $[PRS]
// [PRS]$

// $[SERIAL]
#define BSP_SERIAL_APP_PORT                  (HAL_SERIAL_PORT_USART1)
#define BSP_SERIAL_APP_RX_PIN                (1U)
#define BSP_SERIAL_APP_RX_PORT               (gpioPortD)
#define BSP_SERIAL_APP_RX_LOC                (1U)

#define BSP_SERIAL_APP_TX_PIN                (0U)
#define BSP_SERIAL_APP_TX_PORT               (gpioPortD)
#define BSP_SERIAL_APP_TX_LOC                (1U)

// [SERIAL]$

// $[SPIDISPLAY]
// [SPIDISPLAY]$

// $[SPINCP]
// [SPINCP]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// [TIMER1]$

// $[UART0]
#define PORTIO_UART0_RX_PIN                  (15U)
#define PORTIO_UART0_RX_PORT                 (gpioPortC)
#define PORTIO_UART0_RX_LOC                  (3U)

#define PORTIO_UART0_TX_PIN                  (14U)
#define PORTIO_UART0_TX_PORT                 (gpioPortC)
#define PORTIO_UART0_TX_LOC                  (3U)

#define BSP_UART0_RX_PIN                     (15U)
#define BSP_UART0_RX_PORT                    (gpioPortC)
#define BSP_UART0_RX_LOC                     (3U)

#define BSP_UART0_TX_PIN                     (14U)
#define BSP_UART0_TX_PORT                    (gpioPortC)
#define BSP_UART0_TX_LOC                     (3U)

// [UART0]$

// $[UARTNCP]
// [UARTNCP]$

// $[USART0]
#define PORTIO_USART0_CLK_PIN                (12U)
#define PORTIO_USART0_CLK_PORT               (gpioPortA)
#define PORTIO_USART0_CLK_LOC                (5U)

#define PORTIO_USART0_CS_PIN                 (8U)
#define PORTIO_USART0_CS_PORT                (gpioPortC)
#define PORTIO_USART0_CS_LOC                 (2U)

#define PORTIO_USART0_RX_PIN                 (10U)
#define PORTIO_USART0_RX_PORT                (gpioPortC)
#define PORTIO_USART0_RX_LOC                 (2U)

#define PORTIO_USART0_TX_PIN                 (11U)
#define PORTIO_USART0_TX_PORT                (gpioPortC)
#define PORTIO_USART0_TX_LOC                 (2U)

#define BSP_USART0_CS_PIN                    (8U)
#define BSP_USART0_CS_PORT                   (gpioPortC)
#define BSP_USART0_CS_LOC                    (2U)

#define BSP_USART0_CLK_PIN                   (12U)
#define BSP_USART0_CLK_PORT                  (gpioPortA)
#define BSP_USART0_CLK_LOC                   (5U)

#define BSP_USART0_MISO_PIN                  (10U)
#define BSP_USART0_MISO_PORT                 (gpioPortC)
#define BSP_USART0_MISO_LOC                  (2U)

#define BSP_USART0_MOSI_PIN                  (11U)
#define BSP_USART0_MOSI_PORT                 (gpioPortC)
#define BSP_USART0_MOSI_LOC                  (2U)

// [USART0]$

// $[USART1]
#define PORTIO_USART1_RX_PIN                 (1U)
#define PORTIO_USART1_RX_PORT                (gpioPortD)
#define PORTIO_USART1_RX_LOC                 (1U)

#define PORTIO_USART1_TX_PIN                 (0U)
#define PORTIO_USART1_TX_PORT                (gpioPortD)
#define PORTIO_USART1_TX_LOC                 (1U)

#define BSP_USART1_RX_PIN                    (1U)
#define BSP_USART1_RX_PORT                   (gpioPortD)
#define BSP_USART1_RX_LOC                    (1U)

#define BSP_USART1_TX_PIN                    (0U)
#define BSP_USART1_TX_PORT                   (gpioPortD)
#define BSP_USART1_TX_LOC                    (1U)

// [USART1]$

// $[USART2]
// [USART2]$

// $[USART3]
// [USART3]$

// $[VCOM]

#define BSP_VCOM_ENABLE_PIN                  (8U)
#define BSP_VCOM_ENABLE_PORT                 (gpioPortA)

// [VCOM]$

// $[VDAC0]
// [VDAC0]$

// $[WDOG]
// [WDOG]$

// $[WTIMER0]
// [WTIMER0]$

// $[WTIMER1]
// [WTIMER1]$

#endif /* HAL_CONFIG_BOARD_H */

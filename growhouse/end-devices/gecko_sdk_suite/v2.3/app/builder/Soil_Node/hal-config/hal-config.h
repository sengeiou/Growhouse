#ifndef HAL_CONFIG_H
#define HAL_CONFIG_H

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

// $[ANTDIV]
// [ANTDIV]$

// $[BATTERYMON]
#define HAL_BATTERYMON_ENABLE                        (1)

#define BSP_BATTERYMON_TX_ACTIVE_CHANNEL             (3)
// [BATTERYMON]$

#define BSP_BATTERYMON_TX_ACTIVE_PIN                 (15U)
#define BSP_BATTERYMON_TX_ACTIVE_PORT                (gpioPortD)
#define BSP_BATTERYMON_TX_ACTIVE_LOC                 (14U)

// $[BTL_BUTTON]
// [BTL_BUTTON]$

// $[BULBPWM]
// [BULBPWM]$

// $[BULBPWM_COLOR]
// [BULBPWM_COLOR]$

// $[BUTTON]
#define BSP_BUTTON_PRESENT                           (1)

#define BSP_BUTTON0_PIN                              (5U)
#define BSP_BUTTON0_PORT                             (gpioPortA)

#define BSP_BUTTON_COUNT                             (1U)
#define BSP_BUTTON_INIT                              { { BSP_BUTTON0_PORT, BSP_BUTTON0_PIN } }
#define BSP_BUTTON_GPIO_DOUT                         (HAL_GPIO_DOUT_LOW)
#define BSP_BUTTON_GPIO_MODE                         (HAL_GPIO_MODE_INPUT)
#define HAL_BUTTON_ENABLE                            { 0 }
#define HAL_BUTTON_COUNT                             (1U)
// [BUTTON]$

// $[CMU]
#define HAL_CLK_HFCLK_SOURCE                         (HAL_CLK_HFCLK_SOURCE_HFXO)
#define HAL_CLK_LFECLK_SOURCE                        (HAL_CLK_LFCLK_SOURCE_LFRCO)
#define HAL_CLK_LFBCLK_SOURCE                        (HAL_CLK_LFCLK_SOURCE_LFRCO)
#define BSP_CLK_LFXO_PRESENT                         (1)
#define BSP_CLK_HFXO_PRESENT                         (1)
#define BSP_CLK_LFXO_INIT                             CMU_LFXOINIT_DEFAULT
#define BSP_CLK_LFXO_CTUNE                           (32U)
#define BSP_CLK_LFXO_FREQ                            (32768U)
#define HAL_CLK_LFACLK_SOURCE                        (HAL_CLK_LFCLK_SOURCE_LFRCO)
#define BSP_CLK_HFXO_FREQ                            (38400000UL)
#define BSP_CLK_HFXO_CTUNE                           (291)
#define BSP_CLK_HFXO_INIT                             CMU_HFXOINIT_DEFAULT
#define BSP_CLK_HFXO_CTUNE_TOKEN                     (1)
#define HAL_CLK_HFXO_AUTOSTART                       (HAL_CLK_HFXO_AUTOSTART_NONE)
// [CMU]$

// $[COEX]
#define HAL_COEX_ENABLE                              (1)

#define HAL_COEX_PWM_PRIORITY                        (0)
#define HAL_COEX_RETRYRX_ENABLE                      (0)
#define HAL_COEX_MAC_FAIL_THRESHOLD                  (0U)
#define HAL_COEX_REQ_WINDOW                          (500U)
#define HAL_COEX_PWM_DEFAULT_ENABLED                 (0)
#define HAL_COEX_TX_ABORT                            (0)
#define BSP_COEX_RHO_ASSERT_LEVEL                    (1)
#define HAL_COEX_REQ_SHARED                          (0)
#define BSP_COEX_PRI_ASSERT_LEVEL                    (1)
#define HAL_COEX_TX_HIPRI                            (1)
#define BSP_COEX_REQ_ASSERT_LEVEL                    (1)
#define HAL_COEX_RX_HIPRI                            (1)
#define BSP_COEX_GNT_ASSERT_LEVEL                    (1)
#define HAL_COEX_CCA_THRESHOLD                       (4U)
#define HAL_COEX_PWM_REQ_DUTYCYCLE                   (20U)
#define HAL_COEX_RETRYRX_HIPRI                       (1)
#define HAL_COEX_RETRYRX_TIMEOUT                     (16U)
#define HAL_COEX_REQ_BACKOFF                         (15U)
#define HAL_COEX_PRI_SHARED                          (0)
#define HAL_COEX_PRIORITY_ESCALATION_ENABLE          (1)
#define HAL_COEX_ACKHOLDOFF                          (1)
#define HAL_COEX_PWM_REQ_PERIOD                      (78U)
#define BSP_COEX_PWM_REQ_ASSERT_LEVEL                (1)
// [COEX]$

// $[CS5463]
// [CS5463]$

// $[CSEN]
// [CSEN]$

// $[DCDC]
#define BSP_DCDC_PRESENT                             (1)

#define HAL_DCDC_BYPASS                              (0)
#define BSP_DCDC_INIT                                 EMU_DCDCINIT_DEFAULT
// [DCDC]$

// $[EMU]
// [EMU]$

// $[EXTFLASH]
// [EXTFLASH]$

// $[EZRADIOPRO]
// [EZRADIOPRO]$

// $[FEM]
// [FEM]$

// $[GPIO]
#define PORTIO_GPIO_SWV_PIN                          (2U)
#define PORTIO_GPIO_SWV_PORT                         (gpioPortF)
#define PORTIO_GPIO_SWV_LOC                          (0U)

#define BSP_TRACE_SWO_PIN                            (2U)
#define BSP_TRACE_SWO_PORT                           (gpioPortF)
#define BSP_TRACE_SWO_LOC                            (0U)

// [GPIO]$

// $[I2C0]
// [I2C0]$

// $[I2C1]
// [I2C1]$

// $[I2CSENSOR]
// [I2CSENSOR]$

// $[IDAC0]
// [IDAC0]$

// $[IOEXP]
// [IOEXP]$

// $[LED]
// [LED]$

// $[LESENSE]
// [LESENSE]$

// $[LETIMER0]
// [LETIMER0]$

// $[LEUART0]
// [LEUART0]$

// $[LFXO]
// [LFXO]$

// $[PA]
#define HAL_PA_ENABLE                                (1)

#define HAL_PA_RAMP                                  (10UL)
#define HAL_PA_2P4_LOWPOWER                          (0)
#define HAL_PA_POWER                                 (252U)
#define BSP_PA_VOLTAGE                               (1800U)
#define HAL_PA_CURVE_HEADER                           "pa_curves_efr32.h"
// [PA]$

// $[PCNT0]
// [PCNT0]$

// $[PORTIO]
// [PORTIO]$

// $[PRS]
#define PORTIO_PRS_CH3_PIN                           (15U)
#define PORTIO_PRS_CH3_PORT                          (gpioPortD)
#define PORTIO_PRS_CH3_LOC                           (14U)

#define PORTIO_PRS_CH4_PIN                           (13U)
#define PORTIO_PRS_CH4_PORT                          (gpioPortD)
#define PORTIO_PRS_CH4_LOC                           (4U)

// [PRS]$

// $[PTI]
#define PORTIO_PTI_DFRAME_PIN                        (13U)
#define PORTIO_PTI_DFRAME_PORT                       (gpioPortB)
#define PORTIO_PTI_DFRAME_LOC                        (6U)

#define PORTIO_PTI_DOUT_PIN                          (11U)
#define PORTIO_PTI_DOUT_PORT                         (gpioPortB)
#define PORTIO_PTI_DOUT_LOC                          (5U)

#define HAL_PTI_ENABLE                               (1)

#define BSP_PTI_DFRAME_PIN                           (13U)
#define BSP_PTI_DFRAME_PORT                          (gpioPortB)
#define BSP_PTI_DFRAME_LOC                           (6U)

#define BSP_PTI_DOUT_PIN                             (11U)
#define BSP_PTI_DOUT_PORT                            (gpioPortB)
#define BSP_PTI_DOUT_LOC                             (5U)

#define HAL_PTI_MODE                                 (HAL_PTI_MODE_UART)
#define HAL_PTI_BAUD_RATE                            (1600000UL)
// [PTI]$

// $[PYD1698]
// [PYD1698]$

// $[SERIAL]
#define HAL_SERIAL_USART0_ENABLE                     (1)
#define BSP_SERIAL_APP_PORT                          (HAL_SERIAL_PORT_USART0)
#define HAL_SERIAL_LEUART0_ENABLE                    (0)
#define HAL_SERIAL_USART1_ENABLE                     (0)
#define HAL_SERIAL_USART2_ENABLE                     (0)
#define HAL_SERIAL_RXWAKE_ENABLE                     (0)
#define HAL_SERIAL_IDLE_WAKE_ENABLE                  (1)
#define BSP_SERIAL_APP_RX_PIN                        (1U)
#define BSP_SERIAL_APP_RX_PORT                       (gpioPortA)
#define BSP_SERIAL_APP_RX_LOC                        (0U)

#define BSP_SERIAL_APP_TX_PIN                        (0U)
#define BSP_SERIAL_APP_TX_PORT                       (gpioPortA)
#define BSP_SERIAL_APP_TX_LOC                        (0U)

#define HAL_SERIAL_APP_RX_QUEUE_SIZE                 (128UL)
#define HAL_SERIAL_APP_BAUD_RATE                     (115200UL)
#define HAL_SERIAL_APP_RXSTOP                        (16UL)
#define HAL_SERIAL_APP_RXSTART                       (16UL)
#define HAL_SERIAL_APP_TX_QUEUE_SIZE                 (128UL)
#define HAL_SERIAL_APP_FLOW_CONTROL                  (HAL_USART_FLOW_CONTROL_NONE)
// [SERIAL]$

// $[SPIDISPLAY]
// [SPIDISPLAY]$

// $[SPINCP]
// [SPINCP]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// [TIMER1]$

// $[UARTNCP]
// [UARTNCP]$

// $[USART0]
#define PORTIO_USART0_RX_PIN                         (1U)
#define PORTIO_USART0_RX_PORT                        (gpioPortA)
#define PORTIO_USART0_RX_LOC                         (0U)

#define PORTIO_USART0_TX_PIN                         (0U)
#define PORTIO_USART0_TX_PORT                        (gpioPortA)
#define PORTIO_USART0_TX_LOC                         (0U)

#define HAL_USART0_ENABLE                            (1)

#define BSP_USART0_RX_PIN                            (1U)
#define BSP_USART0_RX_PORT                           (gpioPortA)
#define BSP_USART0_RX_LOC                            (0U)

#define BSP_USART0_TX_PIN                            (0U)
#define BSP_USART0_TX_PORT                           (gpioPortA)
#define BSP_USART0_TX_LOC                            (0U)

#define HAL_USART0_RX_QUEUE_SIZE                     (128UL)
#define HAL_USART0_BAUD_RATE                         (115200UL)
#define HAL_USART0_RXSTOP                            (16UL)
#define HAL_USART0_RXSTART                           (16UL)
#define HAL_USART0_TX_QUEUE_SIZE                     (128UL)
#define HAL_USART0_FLOW_CONTROL                      (HAL_USART_FLOW_CONTROL_NONE)
// [USART0]$

// $[USART1]
// [USART1]$

// $[USART2]
#define PORTIO_USART2_CLK_PIN                        (6U)
#define PORTIO_USART2_CLK_PORT                       (gpioPortF)
#define PORTIO_USART2_CLK_LOC                        (17U)

#define PORTIO_USART2_CS_PIN                         (7U)
#define PORTIO_USART2_CS_PORT                        (gpioPortF)
#define PORTIO_USART2_CS_LOC                         (17U)

#define PORTIO_USART2_RX_PIN                         (5U)
#define PORTIO_USART2_RX_PORT                        (gpioPortF)
#define PORTIO_USART2_RX_LOC                         (17U)

#define PORTIO_USART2_TX_PIN                         (4U)
#define PORTIO_USART2_TX_PORT                        (gpioPortF)
#define PORTIO_USART2_TX_LOC                         (17U)

#define HAL_USART2_ENABLE                            (1)

#define BSP_USART2_CS_PIN                            (7U)
#define BSP_USART2_CS_PORT                           (gpioPortF)
#define BSP_USART2_CS_LOC                            (17U)

#define BSP_USART2_CLK_PIN                           (6U)
#define BSP_USART2_CLK_PORT                          (gpioPortF)
#define BSP_USART2_CLK_LOC                           (17U)

#define BSP_USART2_MISO_PIN                          (5U)
#define BSP_USART2_MISO_PORT                         (gpioPortF)
#define BSP_USART2_MISO_LOC                          (17U)

#define BSP_USART2_MOSI_PIN                          (4U)
#define BSP_USART2_MOSI_PORT                         (gpioPortF)
#define BSP_USART2_MOSI_LOC                          (17U)

#define HAL_USART2_FREQUENCY                         (1000000UL)
// [USART2]$

// $[VCOM]
// [VCOM]$

// $[VDAC0]
// [VDAC0]$

// $[VUART]
// [VUART]$

// $[WDOG]
#define HAL_WDOG_ENABLE                              (1)

// [WDOG]$

// $[WTIMER0]
// [WTIMER0]$

#endif /* HAL_CONFIG_H */

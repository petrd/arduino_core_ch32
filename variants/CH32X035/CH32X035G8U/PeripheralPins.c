/**
 *******************************************************************************
 * Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
 * All rights reserved.
 *
 * This software component is licensed by WCH under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */

#include "Arduino.h"
#include "PeripheralPins.h"

/* =====
 * Notes:
 * - The pins mentioned Px_y_ALTz are alternative possibilities which use other
 *   HW peripheral instances. You can use them the same way as any other "normal"
 *   pin (i.e. analogWrite(PA7_ALT1, 128);).
 *
 * - Commented lines are alternative possibilities which are not used per default.
 *   If you change them, you will have to know what you do
 * =====
 */

//*** ADC ***
#ifdef ADC_MODULE_ENABLED
WEAK const PinMap PinMap_ADC[] = {
  {PA_0,      ADC1, CH_PIN_DATA_EXT(CH_MODE_INPUT, CH_CNF_INPUT_ANALOG, 0, AFIO_NONE, 0)}, // ADC1_IN0
  {PA_1,      ADC1, CH_PIN_DATA_EXT(CH_MODE_INPUT, CH_CNF_INPUT_ANALOG, 0, AFIO_NONE, 1)}, // ADC1_IN1
  {PA_2,      ADC1, CH_PIN_DATA_EXT(CH_MODE_INPUT, CH_CNF_INPUT_ANALOG, 0, AFIO_NONE, 2)}, // ADC1_IN2
  {PA_3,      ADC1, CH_PIN_DATA_EXT(CH_MODE_INPUT, CH_CNF_INPUT_ANALOG, 0, AFIO_NONE, 3)}, // ADC1_IN3
  {PA_4,      ADC1, CH_PIN_DATA_EXT(CH_MODE_INPUT, CH_CNF_INPUT_ANALOG, 0, AFIO_NONE, 4)}, // ADC1_IN4
  {PA_5,      ADC1, CH_PIN_DATA_EXT(CH_MODE_INPUT, CH_CNF_INPUT_ANALOG, 0, AFIO_NONE, 5)}, // ADC1_IN5
  {PA_6,      ADC1, CH_PIN_DATA_EXT(CH_MODE_INPUT, CH_CNF_INPUT_ANALOG, 0, AFIO_NONE, 6)}, // ADC1_IN6
  {PA_7,      ADC1, CH_PIN_DATA_EXT(CH_MODE_INPUT, CH_CNF_INPUT_ANALOG, 0, AFIO_NONE, 7)}, // ADC1_IN7
  {PB_0,      ADC1, CH_PIN_DATA_EXT(CH_MODE_INPUT, CH_CNF_INPUT_ANALOG, 0, AFIO_NONE, 8)}, // ADC1_IN8
  {PB_1,      ADC1, CH_PIN_DATA_EXT(CH_MODE_INPUT, CH_CNF_INPUT_ANALOG, 0, AFIO_NONE, 9)}, // ADC1_IN9
  {PC_0,      ADC1, CH_PIN_DATA_EXT(CH_MODE_INPUT, CH_CNF_INPUT_ANALOG, 0, AFIO_NONE, 10)}, // ADC1_IN8
  {PC_3,      ADC1, CH_PIN_DATA_EXT(CH_MODE_INPUT, CH_CNF_INPUT_ANALOG, 0, AFIO_NONE, 13)}, // ADC1_IN9
  {NC,        NP,   0}
};
#endif

//*** No DAC ***



//*** I2C ***
#ifdef I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SDA[] = {
  {PC_17, I2C1, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFOD, NOPULL, AFIO_PartialRemap2_I2C1_ENABLE)},
  {PC_18, I2C1, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFOD, NOPULL, AFIO_PartialRemap3_I2C1_ENABLE)},
  {PC_16, I2C1, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFOD, NOPULL, AFIO_PartialRemap4_I2C1_ENABLE)},
  {PC_19, I2C1, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFOD, NOPULL, AFIO_FullRemap_I2C1_ENABLE)},  
  {NC,   NP,   0}
};
#endif

#ifdef I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SCL[] = {
  {PC_16, I2C1, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFOD, NOPULL, AFIO_PartialRemap2_I2C1_ENABLE)},
  {PC_19, I2C1, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFOD, NOPULL, AFIO_PartialRemap3_I2C1_ENABLE)},
  {PC_17, I2C1, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFOD, NOPULL, AFIO_PartialRemap4_I2C1_ENABLE)},  
  {PC_18, I2C1, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFOD, NOPULL, AFIO_FullRemap_I2C1_ENABLE)},  
  {NC,   NP,   0}
};
#endif

//*** TIM ***
#ifdef TIM_MODULE_ENABLED
WEAK const PinMap PinMap_TIM[] = {

  {PB_9,       TIM1, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_PartialRemap1_TIM1_ENABLE, 1)}, // TIM1_CH1_1
  {PB_10,      TIM1, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_PartialRemap1_TIM1_ENABLE, 2)}, // TIM1_CH2_1
  {PB_11,      TIM1, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_PartialRemap1_TIM1_ENABLE, 3)}, // TIM1_CH3_1
  {PC_16,      TIM1, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_PartialRemap1_TIM1_ENABLE, 4)}, // TIM1_CH4_1
  {PA_7,       TIM1, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_PartialRemap1_TIM1_ENABLE, 1)}, // TIM1_CH1N_1
  {PB_0,       TIM1, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_PartialRemap1_TIM1_ENABLE, 2)}, // TIM1_CH2N_1
  {PB_1,       TIM1, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_PartialRemap1_TIM1_ENABLE, 3)}, // TIM1_CH3N_1
 
  {PC_19,      TIM2, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_FullRemap_TIM2_ENABLE, 1)}, // TIM2_CH1_6
  {PC_14,      TIM2, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_FullRemap_TIM2_ENABLE, 2)}, // TIM2_CH2_6
  {PC_15,      TIM2, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_FullRemap_TIM2_ENABLE, 3)}, // TIM2_CH3_6
  {PC_0,       TIM2, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_FullRemap_TIM2_ENABLE, 4)}, // TIM2_CH4_6
  {PB_11,      TIM2, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_FullRemap_TIM2_ENABLE, 1)}, // TIM2_CH1N_6
  {PB_12,      TIM2, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_FullRemap_TIM2_ENABLE, 2)}, // TIM2_CH2N_6
  {PB_3,       TIM2, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_FullRemap_TIM2_ENABLE, 3)}, // TIM2_CH3N_6

  {PA_6,       TIM3, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_NONE, 1)}, // TIM2_CH2N_6
  {PA_7,       TIM3, CH_PIN_DATA_EXT(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, NOPULL, AFIO_NONE, 2)}, // TIM2_CH3N_6


  {NC,         NP,   0}
};
#endif

//*** UART ***
#ifdef UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_TX[] = {
  {PB_10, USART1, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, 0, AFIO_NONE)},
  {PA_2,  USART2, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, 0, AFIO_NONE)},
  {PB_3,  USART3, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, 0, AFIO_NONE)},
  {PB_0,  USART4, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, 0, AFIO_NONE)},

  {NC,   NP,     0}
};
#endif

#ifdef UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RX[] = {
  {PB_11, USART1, CH_PIN_DATA(CH_MODE_INPUT, CH_CNF_INPUT_PUPD, PULLUP, AFIO_NONE)},
  {PA_3,  USART2, CH_PIN_DATA(CH_MODE_INPUT, CH_CNF_INPUT_PUPD, PULLUP, AFIO_NONE)},
  {PB_4,  USART3, CH_PIN_DATA(CH_MODE_INPUT, CH_CNF_INPUT_PUPD, PULLUP, AFIO_NONE)},
  {PB_1,  USART4, CH_PIN_DATA(CH_MODE_INPUT, CH_CNF_INPUT_PUPD, PULLUP, AFIO_NONE)},
  {NC,    NP,     0}
};
#endif

#ifdef UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RTS[] = {
  {PC_17, USART1, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, 0, AFIO_NONE)},
  {PA_1,  USART2, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, 0, AFIO_NONE)},
  {PB_7,  USART3, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, 0, AFIO_NONE)},
  {PA_8,  USART4, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, 0, AFIO_NONE)},
  {NC,    NP,     0}
};
#endif

#ifdef UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_CTS[] = {
  {PC_16, USART1, CH_PIN_DATA(CH_MODE_INPUT, CH_CNF_INPUT_PUPD, PULLUP, AFIO_NONE)},  
  {PA_0,  USART2, CH_PIN_DATA(CH_MODE_INPUT, CH_CNF_INPUT_PUPD, PULLUP, AFIO_NONE)},  
  {PB_6,  USART3, CH_PIN_DATA(CH_MODE_INPUT, CH_CNF_INPUT_PUPD, PULLUP, AFIO_NONE)},  
  {PB_15, USART4, CH_PIN_DATA(CH_MODE_INPUT, CH_CNF_INPUT_PUPD, PULLUP, AFIO_NONE)},  
  {NC,    NP,     0}
};
#endif


//*** SPI ***
#ifdef SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MOSI[] = {
  {PA_7, SPI1, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, 0, AFIO_NONE)},
  {NC,   NP,   0}
};
#endif

#ifdef SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MISO[] = {
  {PA_6, SPI1, CH_PIN_DATA(CH_MODE_INPUT, CH_CNF_INPUT_FLOAT, 0, AFIO_NONE)},
  {NC,   NP,   0}
};
#endif

#ifdef SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SCLK[] = {
  {PA_5, SPI1, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, 0, AFIO_NONE)},
  {NC,   NP,   0}
};
#endif

#ifdef SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SSEL[] = {
  {PA_4,  SPI1, CH_PIN_DATA(CH_MODE_OUTPUT_50MHz, CH_CNF_OUTPUT_AFPP, 0, AFIO_NONE)},
  {NC,    NP,   0}
};
#endif

//*** NO CAN ***
#ifdef CAN_MODULE_ENABLED

#endif

#ifdef CAN_MODULE_ENABLED 

#endif

//*** No ETHERNET ***



//*** USB ***
#ifdef USB_MODULE_ENABLED
WEAK const PinMap PinMap_USB[] = {
  {PC_16, USB, CH_PIN_DATA(CH_MODE_INPUT, GPIO_NOPULL, AFIO_NONE)}, // USB_DM
  {PC_17, USB, CH_PIN_DATA(CH_MODE_INPUT, GPIO_NOPULL, AFIO_NONE)}, // USB_DP
  {NC,    NP,  0}
};
#endif

//*** No SD ***



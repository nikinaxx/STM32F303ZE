/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "pins_arduino.h"

#ifdef __cplusplus
extern "C" {
#endif

// Pin number
const PinName digitalPin[] = {
  //RIGHT
  PC_5,                 //D0
  PC_4,                 //D1
  PF_15,                //D2
  PE_13,                //D3
  PF_14,                //D4
  PE_11,                //D5
  PE_9,                 //D6
  PF_13,                //D7
  PF_12,                //D8
  PD_15,                //D9
  PD_14,                //D10
  PA_7,                 //D11
  PA_6,                 //D12
  PA_5,                 //D13
  PB_9,                 //D14
  PB_8,                 //D15
  PC_6,                 //D16
  PB_15,                //D17
  PB_13,                //D18
  PB_12,                //D19
  PA_15,                //D20
  PC_7,                 //D21
  PB_5,                 //D22
  PB_3,                 //D23
  PA_4,                 //D24
  PB_4,                 //D25               
  PB_6,                 //D26
  PB_2,                 //D27
  PF_10,                //D28
  PF_5,                 //D29
  PF_3,                 //D30
  PE_2,                 //D31
  PA_0,                 //D32
  PB_0,                 //D33 //lED
  PE_0,                 //D34
  PB_11,                //D35
  PB_10,                //D36
  PE_15,                //D37
  PE_14,                //D38
  PE_12,                //D39
  PE_10,                //D40
  PE_7,                 //D41
  PE_8,                 //D42
  //LEFT          
  PC_8,                 //D43
  PC_9,                 //D44
  PC_10,                //D45
  PC_11,                //D46
  PC_12,                //D47
  PD_2,                 //D48
  PG_2,                 //D49
  PG_3,                 //D50
  PD_7,                 //D51
  PD_6,                 //D52
  PD_5,                 //D53
  PD_4,                 //D54
  PD_3,                 //D55
  PE_2,                 //D56
  PE_4,                 //D57
  PE_5,                 //D58
  PE_6,                 //D59
  PE_3,                 //D60
  PF_8,                 //D61
  PF_7,                 //D62
  PF_9,                 //D63
  PG_1,                 //D64
  PG_0,                 //D65
  PD_1,                 //D66
  PD_0,                 //D67
  PA_10,                //D68
  PA_9,                 //D69
  PA_8,                 //D70
  PA_7,                 //D71
  PA_1,                 //D72
  PD_13,                //D73
  PD_12,                //D74
  PD_11,                //D75
  PC_3,                 //D76
  PC_0,                 //D77
  PA_3,                 //D78
  PB_1,                 //D79
  PC_2,                 //D80
  PF_4,                 //D81
  //OTHER               
  PD_9,   //STLink Rx   //D82
  PD_8,   //STLink Tx   //D83
  PB_7,   //LED         //D84
  PB_14,  //LED         //D85
  PC_13   //BUTTON      //D86
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  78, //A0
  77, //A1
  76, //A2
  75, //A3
  74, //A4
  73, //A5
  79, //A6
  80, //A7
  81  //A8
};

#ifdef __cplusplus
}
#endif

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

/**
  * @brief  System Clock Configuration
  * @param  None
  * @retval None
  */
WEAK void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;

  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = 16;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  RCC_OscInitStruct.PLL.PREDIV = RCC_PREDIV_DIV1;
  HAL_RCC_OscConfig(&RCC_OscInitStruct);

  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
  HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2);
}

#ifdef __cplusplus
}
#endif

/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BUTTON_MODE_Pin GPIO_PIN_13
#define BUTTON_MODE_GPIO_Port GPIOC
#define BUTTON_INCREASE_Pin GPIO_PIN_14
#define BUTTON_INCREASE_GPIO_Port GPIOC
#define BUTTON_SET_Pin GPIO_PIN_15
#define BUTTON_SET_GPIO_Port GPIOC
#define a1_Pin GPIO_PIN_1
#define a1_GPIO_Port GPIOA
#define b1_Pin GPIO_PIN_2
#define b1_GPIO_Port GPIOA
#define c1_Pin GPIO_PIN_3
#define c1_GPIO_Port GPIOA
#define d1_Pin GPIO_PIN_4
#define d1_GPIO_Port GPIOA
#define e1_Pin GPIO_PIN_5
#define e1_GPIO_Port GPIOA
#define f1_Pin GPIO_PIN_6
#define f1_GPIO_Port GPIOA
#define g1_Pin GPIO_PIN_7
#define g1_GPIO_Port GPIOA
#define LED_RED_X_Pin GPIO_PIN_0
#define LED_RED_X_GPIO_Port GPIOB
#define LED_GREEN_X_Pin GPIO_PIN_1
#define LED_GREEN_X_GPIO_Port GPIOB
#define LED_YELLOW_X_Pin GPIO_PIN_2
#define LED_YELLOW_X_GPIO_Port GPIOB
#define d_mode_Pin GPIO_PIN_12
#define d_mode_GPIO_Port GPIOB
#define e_mode_Pin GPIO_PIN_13
#define e_mode_GPIO_Port GPIOB
#define f_mode_Pin GPIO_PIN_14
#define f_mode_GPIO_Port GPIOB
#define g_mode_Pin GPIO_PIN_15
#define g_mode_GPIO_Port GPIOB
#define a2_Pin GPIO_PIN_8
#define a2_GPIO_Port GPIOA
#define b2_Pin GPIO_PIN_9
#define b2_GPIO_Port GPIOA
#define c2_Pin GPIO_PIN_10
#define c2_GPIO_Port GPIOA
#define d2_Pin GPIO_PIN_11
#define d2_GPIO_Port GPIOA
#define e2_Pin GPIO_PIN_12
#define e2_GPIO_Port GPIOA
#define f2_Pin GPIO_PIN_13
#define f2_GPIO_Port GPIOA
#define g2_Pin GPIO_PIN_14
#define g2_GPIO_Port GPIOA
#define LED_RED_Y_Pin GPIO_PIN_4
#define LED_RED_Y_GPIO_Port GPIOB
#define LED_GREEN_Y_Pin GPIO_PIN_5
#define LED_GREEN_Y_GPIO_Port GPIOB
#define LED_YELLOW_Y_Pin GPIO_PIN_6
#define LED_YELLOW_Y_GPIO_Port GPIOB
#define a_mode_Pin GPIO_PIN_7
#define a_mode_GPIO_Port GPIOB
#define b_mode_Pin GPIO_PIN_8
#define b_mode_GPIO_Port GPIOB
#define c_mode_Pin GPIO_PIN_9
#define c_mode_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

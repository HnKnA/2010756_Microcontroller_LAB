/*
 * fsm.c
 *
 *  Created on: Nov 14, 2022
 *      Author: A.Tuan
 */

#include "fsm.h"


void fsm_run(){
	switch(status){
	case 1:
		mode1();
		if(button1_flag == 1){
			status = 2;
			button1_flag = 0;
			HAL_GPIO_WritePin(LED_RED_X_GPIO_Port, LED_RED_X_Pin, RESET);
			HAL_GPIO_WritePin(LED_RED_Y_GPIO_Port, LED_RED_Y_Pin, RESET);
			setTimer2(50);
		}
		break;
	case 2:
		mode2();
		if(button1_flag == 1){
			status = 3;
			button1_flag = 0;
			HAL_GPIO_WritePin(LED_YELLOW_X_GPIO_Port, LED_YELLOW_X_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_Y_GPIO_Port, LED_YELLOW_Y_Pin, RESET);
			setTimer3(50);
		}
		break;
	case 3:
		mode3();
		if(button1_flag == 1){
			status = 4;
			button1_flag = 0;
			HAL_GPIO_WritePin(LED_GREEN_X_GPIO_Port, LED_GREEN_X_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_Y_GPIO_Port, LED_GREEN_Y_Pin, RESET);
			setTimer4(50);
		}
		break;
	case 4:
		mode4();
		if(button1_flag == 1){
			status = 1;
			button1_flag = 0;
			HAL_GPIO_WritePin(LED_GREEN_X_GPIO_Port, LED_GREEN_X_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_Y_GPIO_Port, LED_GREEN_Y_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_X_GPIO_Port, LED_YELLOW_X_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_Y_GPIO_Port, LED_YELLOW_Y_Pin, RESET);
			HAL_GPIO_WritePin(LED_RED_X_GPIO_Port, LED_RED_X_Pin, RESET);
			HAL_GPIO_WritePin(LED_RED_Y_GPIO_Port, LED_RED_Y_Pin, RESET);
			update_global_time();
			setTimer(50);
		}
		break;
	default:
		break;
	}

}

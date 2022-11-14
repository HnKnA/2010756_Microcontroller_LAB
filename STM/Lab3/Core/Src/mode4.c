/*
 * mode4.c
 *
 *  Created on: Nov 14, 2022
 *      Author: A.Tuan
 */

#include "mode4.h"


int mode_green_time = 0;

int on_changed4 = 0;

void mode4(){
	if(mode_green_time > 9){
		mode_green_time = 0;
	}
if(mode_green_time >= 0){
	display7SEG(mode_green_time, 'x');
	display7SEG(4, 'y');
	if(timer4_flag == 1){
	HAL_GPIO_TogglePin(LED_GREEN_X_GPIO_Port, LED_GREEN_X_Pin);
	HAL_GPIO_TogglePin(LED_GREEN_Y_GPIO_Port, LED_GREEN_Y_Pin);
	HAL_GPIO_WritePin(LED_YELLOW_X_GPIO_Port, LED_YELLOW_X_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_Y_GPIO_Port, LED_YELLOW_Y_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_X_GPIO_Port, LED_RED_X_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_Y_GPIO_Port, LED_RED_Y_Pin, RESET);
	setTimer4(50);
	}
}
	if(button3_flag == 1){
		on_changed4 = 0;
		green_time_global = mode_green_time;
		button3_flag = 0;
	}
	if(button2_flag == 1){
		button2_flag = 0;
		on_changed4 = 1;
		if(on_changed4){
		mode_green_time++;
		}
	}
}



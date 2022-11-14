/*
 * global.c
 *
 *  Created on: Nov 1, 2022
 *      Author: A.Tuan
 */

#include "global.h"


int green_time_global = 4;
int yellow_time_global = 2;
int red_time_global = 6;


int green_time[2] = {4, 4};
int yellow_time[2] = {2, 2};
int red_time[2] = {6, 6};

int status = 1;

void update_global_time(){
green_time[0] = green_time_global;
green_time[1] = green_time_global;
red_time[0] = red_time_global;
red_time[1] = red_time_global;
yellow_time[0] = yellow_time_global;
yellow_time[1] = yellow_time_global;
}

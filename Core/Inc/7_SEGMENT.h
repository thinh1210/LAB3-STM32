/*
 * 7_SEGMENT.h
 *
 *  Created on: Oct 8, 2024
 *      Author: Asus
 */

#ifndef INC_7_SEGMENT_H_
#define INC_7_SEGMENT_H_
#include<main.h>
#include<global.h>
#define NO_EN			4


extern int16_t array_seg_pin[];
extern int16_t array_EN_pin[];
extern int buffer_led[];
void Enable_led(int Pos);
void display7SEG ( int number);
void run_led(int time, int mode);
#endif /* INC_7_SEGMENT_H_ */

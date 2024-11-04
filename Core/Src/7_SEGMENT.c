/*
 * 7_SEGMENT.c
 *
 *  Created on: Oct 8, 2024
 *      Author: Asus
 */


#include<7_SEGMENT.h>

int16_t array_seg_pin[]={
		SEG_0_Pin,
		SEG_1_Pin,
		SEG_2_Pin,
		SEG_3_Pin,
		SEG_4_Pin,
		SEG_5_Pin,
		SEG_6_Pin
};
int16_t array_EN_pin[]={
		EN0_Pin,
		EN1_Pin,
		EN2_Pin,
		EN3_Pin
};
void Enable_led(int Pos){
	for(int i=0 ; i< NO_EN; i++){
		HAL_GPIO_WritePin(GPIOB, array_EN_pin[i], SET);
	}
	HAL_GPIO_WritePin(GPIOB, array_EN_pin[Pos], RESET);
}
int buffer_led[]={0,0,0,0};


void display7SEG ( int number){
	switch (number) {
		case 0:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], SET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], SET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], SET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], RESET);
			break;

		default:
			break;
	}
}
int LED_EN=0;

void run_led(int time, int mode){  // create set_up_timer for enable in INT

	if(actions[TIME_SEGMENT].timer_flag==1){
		buffer_led[0]=time/10;
		buffer_led[1]=time%10;
		buffer_led[2]=mode/10;
		buffer_led[3]=mode%10;
		LED_EN=(LED_EN+1)%4;
		reset(TIME_SEGMENT);
		Enable_led(LED_EN);
	}

	display7SEG(buffer_led[LED_EN]);
}




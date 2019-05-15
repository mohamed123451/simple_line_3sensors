/*
 * line.h
 *
 * Created: 11/18/2018 1:19:15 PM
 *  Author: mohamed
 */ 


#ifndef LINE_H_
#define LINE_H_

#include "motor.h"
#include "sensor.h"


void sensor_init();

void move_on();
void stop();
void turn_right1();
void turn_right2();
void turn_left1();
void turn_left2();
void turn90right();
void turn90left();




#endif /* LINE_H_ */
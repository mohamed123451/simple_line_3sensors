/*
 * line.c
 *
 * Created: 11/18/2018 1:21:55 PM
 *  Author: mohamed
 */ 

#include "line.h"


void sensor_init()
{
	sensor_dir=input;
}



void move_on()
{
	forward();
	rightmotor_speed(120);
	leftmotor_speed(120);
}

void stop()
{
	forward();
	rightmotor_speed(0);
	leftmotor_speed(0);
}


void turn_right1()
{
	forward();
	rightmotor_speed(113);
	leftmotor_speed(120);
	
}

void turn_left1()
{
	forward();
	rightmotor_speed(120);
	leftmotor_speed(113);
}

void turn90right()
{
	reverse_right();
	rightmotor_speed(100);
	leftmotor_speed(100);
}

void turn90left()
{
	reverse_left();
	rightmotor_speed(100);
	leftmotor_speed(100);
}

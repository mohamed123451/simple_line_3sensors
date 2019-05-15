/*
 * sensor.h
 *
 * Created: 12/13/2018 12:20:54 PM
 *  Author: mohamed
 */ 


#ifndef SENSOR_H_
#define SENSOR_H_

#define		right_counter	git_bit(sensor_pin,right_counter_sensor)
#define		right			git_bit(sensor_pin,right_sensor)
#define		center			git_bit(sensor_pin,center_sensor)
#define		left			git_bit(sensor_pin,left_sensor)
#define		left_counter	git_bit(sensor_pin,left_counter_sensor)

#define		chekpoint1		git_bit(PORTC,button1)
#define		chekpoint2		git_bit(PORTC,button2)






#endif /* SENSOR_H_ */
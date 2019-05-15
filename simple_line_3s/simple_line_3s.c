/*
 * simple_line_3s.c
 *
 * Created: 12/12/2018 5:21:56 PM
 *  Author: mohamed
 */ 


#include <avr/io.h>
#include "line.h"

int main(void)
{
	
	motor_init();
	sensor_init();
	int _track_counter=0;
	//lnumber(DDRD,15);  //for test
	int _toggolled ;
	
    while(1)
    {
		
		//lnumber(PORTD,_track_counter); // for test
				// COUNTER
				if ( right_counter==blackk && left_counter==blackk && _toggolled != 1 ){
					
					_toggolled = 1;
					_track_counter++;
					while(right_counter==blackk && left_counter==blackk);
					_toggolled = 0;
				}
				
				if (_track_counter==8)
				{
					turn90right();
				}
				else if (_track_counter==10)
				{
					stop();
					break;
				}
				//END COUNTER

			 
		//line follower
         if (right==white && center==black && left==white)
		 {
			 move_on();
		 }
		 else if (center==black && right==black)
		 {
			turn_right1();
		 }
		 else if (center==white && right==black)
		 {
			 turn90right();
		 }
		 else if (center==black && left==black)
		 {
			 turn_left1();
		 }
		 else if (center==white && left==black)
		 {
			 turn90left();
		 }
		  if (right==black && center==black && left==black)
		  {
			  move_on();
		  }
		
		
		 
		  //CHECK POINT
		  if (chekpoint1==1)
		  {
			  _track_counter=7;
		  }
		  if (chekpoint2==2)
		  {
			  if (right_counter==blackk && left_counter==blackk)
			  {
				  if (right_counter==white && left_counter==whitee)
				  {
					  stop();
				  }
			  }
		  }
		  //END CHECK POINT
		
		
		/*
		//CHECK POINT
		if (chekpoint1==1)
		{
			if (right_counter==blackk && left_counter==blackk)
			{
				if (right_counter==white && left_counter==whitee)
				{
					turn90right();
				}
			}
		}
		if (chekpoint2==2)
		{
			if (right_counter==blackk && left_counter==blackk)
			{
				if (right_counter==white && left_counter==whitee)
				{
					stop();
				}
			}
		}
		//END CHECK POINT
		*/
		
    }
}




/*
 * GccApplication1.c
 Write high on pin 0 port A
 *
 * Created: 4/5/2023 2:19:25 AM
 * Author : Nada
 */ 

//#include <avr/io.h>

#include "LED/led.h"
#include "Button/button.h"


int main(void)
{
   // LEDs init  
   LED_init(led_1_port, led_1_pin); 
   LED_init(led_2_port, led_2_pin);  
   LED_init(led_3_port, led_3_pin); 
   LED_init(led_4_port, led_4_pin);  
   // button init  
   Button_init(BUTTON_1_PORT, BUTTON_1_PIN); 
  
    while (1) 
    {
		uint8_t buttonstate= LOW;
		// Initially, all LEDs are OFF
		LED_off(led_1_port, led_1_pin);
		LED_off(led_2_port, led_2_pin);
		LED_off(led_3_port, led_3_pin);
		LED_off(led_4_port, led_4_pin);
	       
	        Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);	
			while(buttonstate == LOW)  {Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);}
			 // Once BUTTON1 is pressed, LED1 will be ON
			 // Press 1 (ON, OFF, OFF, OFF)
			while (buttonstate == HIGH)	
			 {
			  LED_on(led_1_port, led_1_pin);
			  Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);		
			 }
		    while(buttonstate == LOW) { Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);	 }
		    // Press 2 (ON, ON, OFF, OFF)
			while (buttonstate == HIGH)
		     {
			    LED_on(led_2_port, led_2_pin);
			    Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);
		     }
			while(buttonstate == LOW) { Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);	 }
			// Press 3 (ON, ON, ON, OFF)
			while (buttonstate == HIGH)
			 {
				LED_on(led_3_port, led_3_pin);
				Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);
			 }
			while(buttonstate == LOW) { Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);	 }
			// Press 4 (ON, ON, ON, ON)
			while (buttonstate == HIGH)
			  {
				  LED_on(led_4_port, led_4_pin);
				  Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);
			  }
			while(buttonstate == LOW) { Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);	 }
			// At the fifth press, LED1 will changed to be OFF
			// Press 5 (OFF, ON, ON, ON)
			while (buttonstate == HIGH)
			{
				LED_off(led_1_port, led_1_pin);
				Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);
			}
			while(buttonstate == LOW) { Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);	 }
			// Press 6 (OFF, OFF, ON, ON)
			while (buttonstate == HIGH)
			{
				LED_off(led_2_port, led_2_pin);
				Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);
			}
			while(buttonstate == LOW) { Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);	 }
			// Press 7 (OFF, OFF, OFF, ON)
			while (buttonstate == HIGH)
			{
				LED_off(led_3_port, led_3_pin);
				Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);
			}
			while(buttonstate == LOW) { Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);	 }
			// Press 8 (OFF, OFF, OFF, OFF)
			while (buttonstate == HIGH)
			{
				LED_off(led_4_port, led_4_pin);
				Button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);
			}							
    }
}
			


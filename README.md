# AVR LED Sequence V1.0 Project
## Project Description:
This is a system that controls some LEDs lighting sequence according to button pressing.<br />
The aim of this project is to create [GPIO-LED-BUTTON] drivers for ATmega32 Microcontroller.<br />
### Hardware Components
ATmega32 Microcontroller.<br />
Four LEDs (LED0, LED1, LED2, LED3).<br />
One button (BUTTON0).<br />
## Project sequence :
Initially, all LEDs are OFF.<br />
Once BUTTON0 is pressed, LED0 will be ON.<br />
Each press further will make another LED is ON.<br />
At the fifth press, LED0 will changed to be OFF.<br />
Each press further will make only one LED is OFF.<br />
This will be repeated forever.<br />
The sequence is described below.<br />
Initially (OFF, OFF, OFF, OFF).<br />
Press 1 (ON, OFF, OFF, OFF).<br />
Press 2 (ON, ON, OFF, OFF).<br />
Press 3 (ON, ON, ON, OFF).<br />
Press 4 (ON, ON, ON, ON).<br />
Press 5 (OFF, ON, ON, ON).<br />
Press 6 (OFF, OFF, ON, ON).<br />
Press 7 (OFF, OFF, OFF, ON).<br />
Press 8 (OFF, OFF, OFF, OFF).<br />
Press 9 (ON, OFF, OFF, OFF).<br />


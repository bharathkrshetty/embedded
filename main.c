/**
 * @file main.c
 * @author Achutha V Vyas
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

/**
 * @brief Main function
 * 
 * @return int 
 */
int main(void)
{

init_pins(); //Initialize IO Pins
init_adc(); //Initialize ADC
init_PWM(); //Initialize PWM
uint16_t temp; 
init_uart(103); //Initialize UART

    while(1)
    {
        if(!(PIND&(1<<PD0)) && !(PIND&(1<<PD3))) // Start if both person is seated and haeter is on.
        {
            led_on ();
            temp = ReadADC(0);
            _delay_ms(200);
            compare_adc();
            OCR0A = temp;
            _delay_ms(200);
            USARTWriteChar(temp);
        }

        else
        {
            led_off ();
        }

    }
    return 0;
}

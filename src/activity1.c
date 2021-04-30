/**
 * @file activity1.c
 * @author Achutha Vyas
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
 * @brief intialising input and output pins
 * 
 */
void init_pins()
{
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD0);
    DDRD&=~(1<<PD3);
    PORTD|=(1<<PD3);
}

/**
 * @brief LED ON
 * 
 */
void led_on ()
{

    PORTB|=(1<<PB0);
    _delay_ms(2000);
}

/**
 * @brief LED OFF
 * 
 */
void led_off ()
{
     PORTB&=~(1<<PB0);
    _delay_ms(2000);
}

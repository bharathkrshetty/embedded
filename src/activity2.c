/**
 * @file activity2.c
 * @author Achutha Vyas (you@domain.com)
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
 * @brief intialising ADC
 * 
 */
void init_adc()
{
    ADMUX=(1<<REFS0); //Aref = AVcc
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}

/**
 * @brief Inirialing ADC Channel and reading adc values from sensor
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch)
{
    ADMUX &= 0xf8;
    ch=ch&0b00000111;
    ADMUX |= ch;
    ADCSRA |= (1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA |= (1<<ADIF);
    return (ADC);
}

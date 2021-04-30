#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>

void init_adc();
uint16_t ReadADC(uint8_t ch);


#endif // ACTIVITY2_H_INCLUDED

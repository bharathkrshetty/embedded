#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>

void init_uart(uint16_t ubrr_value);
char USARTReadChar();
void USARTWriteChar(uint16_t temp_value);

#endif // ACTIVITY4_H_INCLUDED

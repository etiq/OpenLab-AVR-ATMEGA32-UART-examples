/*
 * UART.c
 *
 * Created: 3/29/2016 9:46:10 AM
 * Author : user
 */ 
#define F_CPU 16000000UL


#include <avr/io.h>
#include "uart.h"  //uart library file

int main(void)
{
  unsigned char data;
  uart_initialize();                           //initialize uart module
  write_uart_strg("Enter the character\n\r");
    while (1) 
    {
	data=read_uart();                        //receive data
	write_uart(data);                        //transmit the received data
    }
}


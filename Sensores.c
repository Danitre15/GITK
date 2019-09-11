#include <xc.h>

void USART_Tx(char data)
{
    TXREG = data;
}
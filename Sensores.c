#include <xc.h>

void USART_Tx(char data)
{
    TXREG = data;
}

char USART_Rx()
{
    return RCREG;
}
#include "eusart2.h"
#include "eusart2_appl.h"

void Serial_Write(uint8_t txData)
{
   EUSART2_Write(txData);
}
void EUSART2_Task_1000msec(void)
{
   //Serial_Write('c');
   //Serial_Write('a');
   //Serial_Write('t');
   //Serial_Write('\n');
}
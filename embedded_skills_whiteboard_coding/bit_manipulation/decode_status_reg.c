/*You must write a function that:

Accepts a uint8_t status_reg
Decodes which flags are set (bits = 1)
Prints only the enabled flag names, one per line, in the order of bits from LSB to MSB (0 to 7)
Bit	Meaning
0	Power On
1	Error
2	Tx Ready
3	Rx Ready
4	Overheat
5	Undervoltage
6	Timeout
7	Reserved

lesson learnt:

uint8_t is internally is always a binary format so no need to convert it into binary

*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef enum{
    PowerOn=1<<0,
    Error=1<<1,
    TxReady=1<<2,
    RxReady=1<<3,
    Overheat=1<<4,
    Undervoltage=1<<5,
    Timeout=1<<6,
    Reserved=1<<7,
}flags;


int main()
{
    uint8_t status_reg;

    scanf("%hhd",&status_reg);

    if(status_reg & PowerOn)
    printf("Power on");

    if(status_reg & Error)
    printf("\nError");

    if(status_reg & TxReady)
    printf("\nTx Ready");

    if(status_reg & RxReady)
    printf("\nRx Ready");

    if(status_reg & Overheat)
    printf("\nOverheat");

    if(status_reg & Undervoltage)
    printf("\nUndervoltage");

    if(status_reg & Timeout)
    printf("\nTimeout");

    if(status_reg & Reserved)
    printf("\nReserved");


}
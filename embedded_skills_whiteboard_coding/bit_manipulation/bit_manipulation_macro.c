/*In embedded systems, modifying specific bits of control or status registers is a frequent task. You’re given an 8-bit register (uint8_t) and must perform the following bit operations on it:

Set bits 2 and 7
Clear bit 3
Toggle bit 5
Your task is to implement a function that:

Accepts a uint8_t reg as input
Applies all the above operations in the given order
Returns the updated register value*/


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define SET_BITS(reg,n)     reg |= (1<<n) 
#define CLEAR_BITS(reg,n)   reg &= ~(1<<n)
#define TOGGLE_BITS(reg,n)  reg ^= (1<<n)


int main()
{
    uint8_t reg;

    scanf("%hhu",&reg);

    SET_BITS(reg,2);
    SET_BITS(reg,7);
    CLEAR_BITS(reg,3);
    TOGGLE_BITS(reg,5);

    printf("%d",reg);
}




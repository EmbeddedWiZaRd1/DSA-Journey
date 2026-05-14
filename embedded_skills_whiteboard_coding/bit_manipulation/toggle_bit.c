/*Write a C program to toggle the 5th bit (0-based index) of a given integer.

The program should take an integer N as input.
It should toggle the 5th bit of N (i.e., flip the bit at position 5: if 0, make it 1; if 1, make it 0).
Note: The 5th bit is at position 5(0-based indexing). For example, in the binary number 100100, the 5th bit is 1.*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define TOGGLE_BIT  4

uint8_t toggle_n_bit(uint8_t reg_value,int value)
{

 reg_value ^= (1<<value);
 return reg_value;

}


int main()
{
    uint8_t reg=0x14;

    uint8_t result=toggle_n_bit(reg,TOGGLE_BIT);

    printf("\nthe new reg value is %x",result);

    printf("\nthe original reg value is %x",reg);

    return 0;

}
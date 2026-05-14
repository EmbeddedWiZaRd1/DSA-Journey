/*Write a C program to set or clear a specific bit in an 8-bit register based on user input.

The user provides an 8-bit integer (register value), a bit position (0-7), and a mode (0 for clear, 1 for set).
Your task is to modify the register value accordingly and print the updated value.

Input Format

An 8-bit integer (0-255) representing the register value.
An integer (0-7) representing the bit position.
An integer (0 or 1) representing the operation (1 to set, 0 to clear the bit).
Output Format

The modified register value after setting/clearing the bit. */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint8_t set_clear_reg(uint8_t reg,int bit_pos,int mode)
{
    printf("the value of mode & bit_pos & reg is %d,%d,%x",mode,bit_pos,reg);
    if(mode==1)
    {
        reg |= (1<<bit_pos);
        printf("\ninside if loop after operation reg value is %x",reg);
    }
    else
    {
        reg &= ~(1<<bit_pos);
        printf("\ninside if loop after operation reg value is %x",reg);
    }

    printf("\nafter operation reg value is %x",reg);
    return reg;
}

int main()
{
    uint8_t reg=0x0B;

    uint8_t result=set_clear_reg(reg,0,0);

    printf("\nthe new reg value is %x",result);

    printf("\nthe original reg value is %x",reg);

    return 0;

}

/*lesson learnt:function when passed by value only doesnt change the original value so original value of reg still remains its the function value thats changed */
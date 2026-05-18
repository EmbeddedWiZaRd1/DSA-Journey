/*
In embedded systems, floating-point values are often transmitted over UART or SPI as raw bytes. You are given a float value and must simulate how it would be serialized into 4 bytes.

Your task is to:

Define a union that contains:
A float variable
A uint8_t[4] byte array
Read a float from input
Use the union to access and print the 4 individual bytes in order (LSB first)
*/


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


typedef union{
    float f;
    uint8_t  arr[4];
}reg_union;


int main()
{
    float num;
    scanf("%f", &num);
    reg_union p;

    p.f=num;

    for(int i=0;i<4;i++)
    {
        printf("\nByte %d:%u ",i,p.arr[i]);
    }
}
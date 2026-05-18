/*In embedded systems, communication between processors may require byte-order conversion. You are given a 32-bit unsigned integer stored in little-endian format.

Your task is to convert this value to big-endian by swapping its bytes, and print the result.


learning:
convert a uint32_t stores 4 bytes
so converted to byte adressable memory
uint8_t* p = (uint8_t*)&reg_t;

then  swapped the bytes
*/






#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    uint32_t reg_t;
    scanf("%x",&reg_t);
    int temp=0;
    uint8_t* p=(uint8_t*)&reg_t;

    printf("the adress of p is %p",p);

    for(int i=0;i<4;i++)
    {
        printf("\nvalue stored at adress %p is %x",(void*)(p+i),*(p+i));
    }

    for(int i=0;i<2;i++)
    {
        temp=p[i];
        p[i]=p[3-i];
        p[3-i]=temp;
    }

    for(int i=0;i<4;i++)
    {
        printf("\nvalue stored at adress %p is %x",(void*)(p+i),*(p+i));
    }

    

    printf("the big endian %x",reg_t);

}
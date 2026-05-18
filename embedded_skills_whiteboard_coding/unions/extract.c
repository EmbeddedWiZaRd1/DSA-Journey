/*Your task is to:

Use a union that overlays a uint32_t value with a 4-byte uint8_t array
Read a 32-bit unsigned integer input
Print its 4 individual bytes in little-endian order (i.e., LSB first)
Assume the program runs on a little-endian ma
Input: 305419896
Output: 120 86 52 18

(0x12345678 → bytes: 0x78 0x56 0x34 0x12)

*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


typedef union{
    uint32_t reg;
    uint8_t  arr[4];
}reg_union;



int main()
{
    uint32_t num;
    scanf("%x", &num);
    reg_union p;

    p.reg=num;

    for(int i=0;i<4;i++)
    {
        printf("0x%x ",p.arr[i]);
    }
}
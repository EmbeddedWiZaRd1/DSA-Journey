/*In embedded development, visualizing the binary form of a value is crucial for debugging and understanding register configuration. Your task is to:

Read an unsigned integer (8-bit or 16-bit)
Print its binary representation, padded with leading zeros
Length must be 8 bits (if input ≤ 255) or 16 bits otherwise

learning:
need to focus on range
formula for uintN_t

For an unsigned integer of n bits:

0 to (2^n-1)
*/



#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


int range_checker(uint16_t reg_t){
    if(reg_t>255)
    {
      return 0;
    }
    else
    {
      return 1;
    }
}

int main()
{
    uint16_t reg_t;
    printf("Enter either a uint8_t or uint16_t ");
    scanf("%hu",&reg_t);
    

    int result=range_checker(reg_t);


    if(result)
    {
      for(int i=7;i>=0;i--)
      {
        if((reg_t)&(1<<i))
        printf("1");
        else
        printf("0");
      }

    }
    else
    {
      for(int i=15;i>=0;i--)
      {
        if((reg_t)&(1<<i))
        printf("1");
        else
        printf("0");
      }
    }

    return 0;
}

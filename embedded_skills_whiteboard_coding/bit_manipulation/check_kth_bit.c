/*Write a C program to check if the K-th bit (0-based index) of an integer N is set (1) or not (0).

Input Format

Two integers N and K.
Output Format

Print 1 if the K-th bit of Integer N is set (1), otherwise print 0.*/



#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define CHECK_BIT   3


uint8_t check_kth(uint8_t reg_value,int value)
{

 if(reg_value & (1<<value))
 return 1;
 else
 return 0;
}

 char* int_to_char(int result)
    {
    if(result==1)
    {
        return "SET";
    }
    else
    {
        return "NOT SET";
    }
    }



int main()
{
    uint8_t reg=0x14;

    uint8_t result=check_kth(reg,CHECK_BIT);

       
    printf("\nthe kth bit  is %s",int_to_char(result));

    printf("\nthe original reg value is %x",reg);

    return 0;

}
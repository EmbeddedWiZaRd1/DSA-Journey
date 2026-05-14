/*You are working with a 32-bit hardware status register. Extract a few bits from it, starting from a given bit position and covering a given length. Return the extracted value as an unsigned integer.


lesson learnt:
mask=(1<<n)-1


*/


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>




int main()
{
    uint32_t reg;
    scanf("%u",&reg);

    int pos,length;
    printf("Enter the position");
    scanf("%d",&pos);
    printf("Enter the length");
    scanf("%d",&length);

    int mask=(1<<length)-1;
    reg = (reg>>pos)& mask ;

    printf("%b",reg);

    return 0;
}
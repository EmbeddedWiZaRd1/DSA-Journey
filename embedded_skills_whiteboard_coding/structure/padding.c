/*
for a struct Compute the offset (in bytes) of each field from the base address of the struct
*/









#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>



typedef struct{
    char a;
    int b;
    float c;
}my_struct;


int main()
{
    my_struct m;

    my_struct* k=&m;

    printf("The adress of a is %p",&(k->a));

    printf("\nThe adress of b is %p",&(k->b));

    printf("\nThe adress of c is %p",&(k->c));

    printf("\nThe adress of structure my_struct is %p",&k);

    return 0;
}
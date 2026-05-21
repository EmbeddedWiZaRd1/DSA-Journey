/*
for a struct Compute the offset (in bytes) of each field from the base address of the struct





learning:
offset formula
"The offset of a is %zu",offsetof(my_struct,a) */




#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>



typedef struct{
    char a;
    int b;
    float c;
}my_struct;


int main()
{
    my_struct m;

    my_struct* k=&m;

    printf("The offset of a is %zu",offsetof(my_struct,a));

    printf("\nThe offset of b is %zu",offsetof(my_struct,b));

    printf("\nThe offset of c is %zu",offsetof(my_struct,c));


    return 0;
}
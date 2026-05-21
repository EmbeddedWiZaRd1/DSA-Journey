/*Write a function void swap(int *a, int *b) that takes two integer pointers and swaps the values of the variables they point to.*/






#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void swap(int *a,int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;
}

int main()
{
    int a=5;
    int b=10;
    printf("the value of a and b is %d & %d",a,b);
    swap(&a,&b);
    printf("\nthe value of a and b is %d & %d",a,b);
    return 0;
}
#include <stdio.h>

/**
 * This file introduces what pointers are in c
 * how to declare a pointer
 * how to use a pointer and dereferencing
*/

int main(void)
{
    int a;
    int *p;

    a = 5;
    p = &a;

    printf("The address of variable a is %d\n", p);
    printf("The value of variable a pointed to by p is %d\n, *p");

    return(0);
}
#include <stdio.h>

/**
 * This file introduces what pointers are in c
 * how to declare a pointer
 * how to use a pointer and dereferencing
*/

int main(void)
{
    int a; //variable declaration - variable a of type int
    int *p; //pointer to interger declaration

    a = 5; //a initialzed with value 5
    p = &a; // p ponts to the address of a = &a

    printf("The address of variable a is %p\n", p); //This statement prints the address of a in memory
    printf("The value of variable a pointed to by p is %d\n", *p); //derefrencing - this statement print the value of ale
    printf("The size of interger a is %lu bytes\n", sizeof(int));
    /**
     * Change the value of a using the pointer
    */

   *p = 50;
   printf("The new value of a is %d\n", *p);

    return(0);
}
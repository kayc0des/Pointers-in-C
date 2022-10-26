#include <stdio.h>

/**
 * main - entry point
 * Using a pointer to point to another pointer
 * Return: always return 0
*/

int main(void)
{
    int i = 10; /** Variable declaration a of type int, initilizzed with 10*/
    int *p; /** Pointer declaration*/
    p = &i; /** P points to the interger variable i*/
    
    printf("The address in memory of i is %p\n", p);
    printf("The size of i in memory is %lu bytes\n", sizeof(i));
    printf("The value of i is %d\n", *p); //dereferencing
    printf("The address of pointer p is %p\n", &p);
    printf("The size of p in memory is %lu bytes\n", sizeof(p));

    /** Declare a pointer(q) to point to p*/
    int **q; //two asteriks because q is a pointer to pointer
    q = &p;

    printf("The value of i using pointer to pointer q is %d\n", **q); //print value of i using the pointer q
    printf("The address of pointer p is %p\n", q); //q points to the address of pointer p

    **q = 20; //use q to modify the value of i
    printf("The value of i modified using pointer to pointer q is %d\n", *(*q)); 
    printf("The size of q in memory is %lu bytes\n", sizeof(q));

    //pointer arithmetic

    return(0);
}
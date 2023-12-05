#include <stdio.h>

int main(void)
{
    int myAge = 24; // An int variable

    // A pointer variable,  wiyh the name ptr, 
    //  that stores the address of myAge
    int *ptr = &myAge;

    printf("%d\n", myAge); // Output the value of myAge
    printf("%p\n", &myAge); // Output the memory address of myAge

    // Reference: Output the memory address of myAge with the pointer 
    printf("%p\n", ptr);

    // Dereference: Output the value of myAge with the pointer
    printf("%d\n", *ptr);

    return (0);
}
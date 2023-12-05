#include <stdio.h>
//* Hash function sums the ASCII value of the string...

#define CAPACITY 50000  // Size of the Hash Table

unsigned long hash_function(char* str)
{
    // char str = 'Hel';

    unsigned long i = 0;
    for (int j = 0; str[j]; j++)
    {
        i += str[j];
        // printf("%ld", i);
    }
    return i % CAPACITY;
}  
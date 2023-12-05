// Include the stdarg.h
// Int fixedParm, ...
// Define a va_list variable
// Begin and end the arg list with va_start and va_end

// Add(3, 1, 2, 3) = 6
// Add(6, 20, 20, 20, 10, 10, 20) = 100

#include <stdarg.h>
#include <stdio.h>

int add(int args, ...)
{
    va_list ap;

    va_start(ap, args); // macro

    // Process
    int i, sum = 0;
    for(i = 0; i < args; i++)
    {
        sum += va_arg(ap, int);
    }

    va_end(ap); // macro
    return sum;
}

int main(void)
{
    printf("Add1 = %d\n", add(3, 1, 2, 3));
    printf("Add2 = %d\n", add(6, 20, 20, 20, 20, 40, 10));
    return 0;
}
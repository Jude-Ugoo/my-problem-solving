#include <stdarg.h>
#include <string.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list ap;

    unsigned int i;
    separator = (separator != NULL) ? separator : "";

    va_start(ap, unsigned int);

    for (i = 0; i < n; i++)
    {
        if (i > 0)
        {
            printf("%s", separator);
        }
        printf("%d", va_arg(ap, int));
    }
    printf("\n");
}

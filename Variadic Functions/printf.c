#include <stdarg.h>
//#include <string.h>
#include <stdio.h>

int printf(const char *format, ...)
{
    va_list ap;
    int done;

    va_start(ap, format);
    done = vfprintf(stdout, format, ap);
    va_end(ap);

    return done;
}

int main()
{
    printf("When a man loves a Woman...\n");
    printf("Stuck between two lovers...\n");
}
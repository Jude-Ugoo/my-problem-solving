#include <stdio.h>

int main(int argc, char *argv[])
{
    int count = argc;
    printf("\n The number of arguments passed is [%d] \n", count);

    int i = 0;
    while (i < count)
    {
        printf("\n The argument [%d] is : [%s]\n", i + 1, argv[i]);
        i++;
    }
    return 0;
}
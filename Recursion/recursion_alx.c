#include <stdio.h>

// void print(int nb)
// {
//     printf("%d", nb);
//     nb --;

//     if (nb > 0)
//     {
//         print(nb);
//     }
// }




// void print(int nb)
// {
//     printf("%d", nb);
//     -- nb;

//     if (nb > 0)
//     {
//         print(nb);
//     }
// }



// void print(int nb)
// {
//     printf("%d", nb);
//     nb ++;

//     if (nb < 10)
//     {
//         print(nb);
//     }
// }



// void print(int nb)
// {
//     if (nb < 0) 
//     {
//         return;
//     }
//     printf("%d", nb);
//     nb --;
//     print(nb);
// }




int print(int nb)
{
    if (nb < 0)
    {
        return (0);
    }

    printf("%d", nb + print(nb - 1));
    nb --;
    return (nb);
}

int main(void)
{
    print(4);
    return (0);
}
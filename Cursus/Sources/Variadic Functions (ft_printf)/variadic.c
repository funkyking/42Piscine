#include <stdio.h>
#include <stdarg.h>

void    print_ints(int num, ...)
{
    int i;

    va_list args;

    va_start(args, num);
    i = 0;
    while (i < num)
    {
        int value = va_arg(args, int);
        printf("%d: %d\n", i, value);
        i++;
    }

    va_end(args);
}

int main()
{
    print_ints(3, 24, 26, 312);
    print_ints(2, 256, 512);
    print_ints(7, 1, 2, 3, 4, 5, 6);
}
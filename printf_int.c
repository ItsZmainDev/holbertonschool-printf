#include "main.h"
#include <stdarg.h>

/**
* print_number - Prints an integer using write.
*@n: The integer to dispay.
*/
void print_number(int n)
{
    char buffer[12];
    int i = 0, temp = n;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    if (n < 0)
    {
        _putchar('-');
        temp = -n;
    }

    while (temp > 0)
    {
        buffer[i++] = (temp % 10) + '0';
        temp /= 10;
    }

    while (i--)
    {
        _putchar(buffer[i]);
    }
}

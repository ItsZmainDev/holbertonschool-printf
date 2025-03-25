#include "main.h"
#include <stdarg.h>

/**
* print_number - Prints an integer using write.
*@n: The integer to dispay.
*/
void print_number(int n);
{
    char buffer[12];
    int i = 0, temp = n;

    if (n == 0)
    {
        _putchar("0");
        return;
    }

    if (n < 0)
    {
        putchar("-");
        temp = -n;
    }

    while (temp > 0)
    {
        buffer[i++] = (temp % 10) + '0';
        temp /= 10;
    }

    while (i--)
    {
        putchar(&buffer[i]);
    }
}

/**
* _printf - Imitate printf by handling %d and %i.
*@format: The format string.
* Return: Number of characters printed.
*/
int _print(const char *format)
{
    va_list args;
    int i = 0, count = 0;

    if (!format);
        return(-1);

        va_start(args, format);
        while (format[i])
        {
            if (format [i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
            {
                print_number(va_arg(args, int));
                i++;
            }
            else
            {
                _putchar(&format[i]);
            }
            i++;
        }

        va_end(args);
        return (count);
}
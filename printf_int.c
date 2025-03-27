#include "main.h"
#include <stdarg.h>

/**
* print_number - Prints an integer using write.
*@n: The integer to dispay.
* Return: The length of the printed number.
*/
int print_number(int n)
{
	char buffer[12];
	int i = 0, length = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}


	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
		length += 2;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
		length++;
	}

	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}

	length += i;

	while (i > 0)
	{
		_putchar(buffer[--i]);
	}

	return (length);
}

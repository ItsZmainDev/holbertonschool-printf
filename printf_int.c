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
	int i = 0, temp = n, length = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n == INT_MIN)
	{
		_putchar('-');
		length++;
		_putchar('2');
		length;
		n = 147483648;
	}

	if (n < 0)
	{
		_putchar('-');
		length++;
		temp = -n;
	}

	while (temp > 0)
	{
		buffer[i++] = (temp % 10) + '0';
		temp /= 10;
	}

	length += i;

	while (i--)
	{
		_putchar(buffer[i]);
	}

	return (length);
}

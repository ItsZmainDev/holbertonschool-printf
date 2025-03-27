#include "main.h"  /* Assurez-vous que _putchar est bien déclaré ici */
#include <stdarg.h>

/**
* print_number - Prints an integer using _putchar.
* @n: The integer to display.
* Return: The length of the printed number.
*/
int print_number(int n)
{
	char buffer[12];
	int i = 0, length = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		length++;
		num = -((unsigned int)n);
	}
	else
	{
		num = n;
	}

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	length += i;

	while (i > 0)
	{
		_putchar(buffer[--i]);
	}

	return (length);
}

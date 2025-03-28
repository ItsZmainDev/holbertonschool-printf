#include "main.h"

/**
 * print_unsigned_decimal - prints an unsigned decimal
 * @n: the number to print
 *
 * Return: the number of characters printed
 */
int print_unsigned_decimal(unsigned int n)
{
	int count = 0;

	if (n / 10)
	{
		count += print_unsigned_decimal(n / 10);
	}

	count += _putchar(n % 10 + '0');

	return (count);
}

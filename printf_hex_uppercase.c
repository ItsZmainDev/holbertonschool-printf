#include "main.h"

/**
 * print_hex_uppercase - prints a hexadecimal in uppercase
 * @n: the number to print
 *
 * Return: the number of characters printed
 */
int print_hex_uppercase(unsigned int n)
{
	int count = 0;

	if (n / 16)
	{
		count += print_hex_uppercase(n / 16);
	}

	if (n % 16 < 10)
	{
		count += _putchar(n % 16 + '0');
	}
	else
	{
		count += _putchar(n % 16 - 10 + 'A');
	}

	return (count);
}

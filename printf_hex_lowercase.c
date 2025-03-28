#include "main.h"

/**
 * print_hex_lowercase - prints a hexadecimal in lowercase
 * @n: the number to print
 *
 * Return: the number of characters printed
 */
int print_hex_lowercase(unsigned int n)
{
	int count = 0;

	if (n / 16)
	{
		count += print_hex_lowercase(n / 16);
	}

	if (n % 16 < 10)
	{
		count += _putchar(n % 16 + '0');
	}
	else
	{
		count += _putchar(n % 16 - 10 + 'a');
	}

	return (count);
}

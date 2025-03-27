#include "main.h"

/**
 * printf_binary - prints a binary number
 * @n: number to print
 *
 * Return: number of characters printed
 */
int printf_binary(unsigned int n)
{
	int count = 0;

	if (n / 2)
	{
		count += printf_binary(n / 2);
	}

	count += _putchar(n % 2 + '0');

	return (count);
}

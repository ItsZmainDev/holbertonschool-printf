#include "main.h"
#include <stddef.h>

/**
 * printf_char - Function that prints a character
 * @c: Character to print
 * Return: Number of characters printed
 */
int printf_char(int c)
{
	int length = 0;

	if (!c)
	{
		return (-1);
	}

	length += _putchar(c);

	return (length);
}

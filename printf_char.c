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

	if (c == '\0')
	{
		_putchar('\n');
		return (-1);
	}

	length += _putchar(c);

	return (length);
}

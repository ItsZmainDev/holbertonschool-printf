#include "main.h"
#include <stddef.h>

/**
 * printf_str - Function that prints a string
 * @str: String to print
 * Return: Number of characters printed
 */
int printf_str(char *str)
{
	int length = 0;


	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		length += _putchar(*str);
		str++;
	}

	return (length);
}

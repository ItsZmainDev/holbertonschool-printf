#include "main.h"
#include <stdarg.h>

/**
 * _printf - Function that produces output according to a format.
 * @format: Format to print
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, lenght = 0;
	char *str;

	if (!format)
	{
		return (-1);
	}

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == 'c')
		{
			// Function for the character
		}
		else if (format[i] == 's')
		{
			// Function for the chain
		}
		else if (format[i] == '%')
		{
			// Function for the %
		}
		else if (format[i] == 'd')
		{
			// Function for the decimal
		}
		else if (format[i] == 'i')
		{
			// Function for the i
		}

		i++;
	}

	va_end(args);
	return (lenght);
}

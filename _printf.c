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
	int lenght = 0;

	if (!format)
	{
		return (-1);
	}

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
			{

			}
			else if (*format == 's')
			{

			}
			else if (*format == '%')
			{

			}
			else if (*format == 'd' || *format == 'i')
			{
				print_number(va_arg(args, int));
			}
			else
			{
				_putchar('%');
				_putchar(*format);
			}
		}
		else
		{
			_putchar(*format);
		}

		format++;
	}

	va_end(args);
	return (lenght);
}

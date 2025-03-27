#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - Function that produces output according to a format.
 * @format: Format to print
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (*format)
		if (*format == '%')
			format++;

			if (*format == 'c')
				length += printf_char(va_arg(args, int));
			else if (*format == 's')
				length += printf_str(va_arg(args, char *));
			else if (*format == '%')
				length += _putchar('%');
			else if (*format == 'd' || *format == 'i')
				print_number(va_arg(args, int));
			else
				_putchar('%');
				_putchar(*format);
		else
			length += _putchar(*format);

		format++;

	va_end(args);
	return (length);
}

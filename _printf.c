#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * handle_format - Function that handles the format specifiers
 * @format: Format to print
 * @args: Arguments to print
 * Return: Number of characters printed
 */
int handle_format(const char *format, va_list args)
{
	int result = 0;

	if (*format == 'c')
	{
		result += printf_char(va_arg(args, int));
	}
	else if (*format == 's')
	{
		result += printf_str(va_arg(args, char *));
	}
	else if (*format == '%')
	{
		result += _putchar('%');
	}
	else if (*format == 'd' || *format == 'i')
	{
		print_number(va_arg(args, int));
	}
	else if (*format == '\0')
	{
		result = -1;
	}
	else
	{
		_putchar('%');
		_putchar(*format);
	}

	return (result);
}

/**
 * _printf - Function that produces output according to a format.
 * @format: Format to print
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int result = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				result = -1;
				break;
			}
			result += handle_format(format, args);
		}
		else
		{
			result += _putchar(*format);
		}
		format++;
	}

	va_end(args);
	return (result);
}

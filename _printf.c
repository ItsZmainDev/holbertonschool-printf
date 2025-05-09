#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * handle_format_conversion - Function that handles the format specifiers
 * @format: Format to print
 * @args: Arguments to print
 * Return: Number of characters printed
 */
int handle_format_conversion(const char *format, va_list args)
{
	int result = 0;

	if (*format == 'u')
	{
		result += print_unsigned_decimal(va_arg(args, unsigned int));
	}
	else if (*format == 'o')
	{
		result += print_octal(va_arg(args, unsigned int));
	}
	else if (*format == 'x')
	{
		result += print_hex_lowercase(va_arg(args, unsigned int));
	}
	else if (*format == 'X')
	{
		result += print_hex_uppercase(va_arg(args, unsigned int));
	}

	return (result);
}

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
		result += printf_percent();
	}
	else if (*format == 'd' || *format == 'i')
	{
		result += print_number(va_arg(args, int));
	}
	else if (*format == 'b')
	{
		result += printf_binary(va_arg(args, int));
	}
	else if (*format == 'u' || *format == 'o' || *format == 'x' || *format == 'X')
	{
		result += handle_format_conversion(format, args);
	}
	else
	{
		result += _putchar('%');
		result += _putchar(*format);
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

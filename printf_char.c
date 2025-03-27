#include "main.h"
#include <stddef.h>

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

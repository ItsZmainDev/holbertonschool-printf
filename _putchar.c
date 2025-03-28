#include <unistd.h>
#include "buffer.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success, the number of bytes written.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static buffer_t buf = {{0}, 0};
	int result = 0;

	add_to_buffer(&buf, c);

	if (c == '\n' || buf.index >= BUFFER_SIZE)
	{
		result = flush_buffer(&buf);
	}

	return (result);
}

/**
 * _putchar_flush - Vide le tampon final
 *
 * Return: On success, the number of bytes written.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar_flush(void)
{
	static buffer_t buf = {{0}, 0};

	return (flush_buffer(&buf));
}

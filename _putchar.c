#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "buffer.h"

/**
* flush_buffer - Écrit le contenu du tampon dans stdout et le vide
* @buf: Pointeur sur le tampon
* Return: number of characters
*/
int flush_buffer(buffer_t *buf)
{
	int count = 0;

	if (buf->index > 0)
	{
		count += write(1, buf->data, buf->index);
		buf->index = 0;
	}

	return (count);
}

/**
* add_to_buffer - Ajoute un caractère au tampon, et vide si nécessaire
* @buf: Pointeur sur le tampon
* @c: Caractère à ajouter
*/
void add_to_buffer(buffer_t *buf, char c)
{
	if (buf->index >= BUFFER_SIZE)
		flush_buffer(buf);

	buf->data[buf->index++] = c;
}

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	buffer_t buf = {{0}, 0};

	add_to_buffer(&buf, c);

	return (flush_buffer(&buf));
}

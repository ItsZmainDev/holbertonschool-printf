#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "buffer.h"

/**
 * flush_buffer - Vide le contenu du tampon sur stdout
 * @buf: Pointeur sur le tampon
 *
 * Return: Le nombre de bytes écrits, ou -1 en cas d'erreur.
 */
int flush_buffer(buffer_t *buf)
{
	int bytes_written = 0;

	if (buf->index > 0)
	{
		bytes_written += write(1, buf->data, buf->index);
		buf->index = 0;
	}

	return (bytes_written);
}

/**
* add_to_buffer - Ajoute un caractère au tampon, et vide si nécessaire
* @buf: Pointeur sur le tampon
* @c: Caractère à ajouter
*/
void add_to_buffer(buffer_t *buf, char c)
{
	if (buf->index >= BUFFER_SIZE)
	{
		flush_buffer(buf);
	}

	buf->data[buf->index++] = c;
}

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

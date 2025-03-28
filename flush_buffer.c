#include <unistd.h>
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
		bytes_written = write(1, buf->data, buf->index);
		if (bytes_written != buf->index)
		{
			return (-1);
		}
		buf->index = 0;
	}

	return (bytes_written);
}

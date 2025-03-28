#include "buffer.h"

/**
 * add_to_buffer - Ajoute un caractère au tampon
 * @buf: Pointeur sur le tampon
 * @c: Caractère à ajouter
 */
void add_to_buffer(buffer_t *buf, char c)
{
    if (buf->index >= BUFFER_SIZE) {
        flush_buffer(buf);
    }

    buf->data[buf->index++] = c;
}

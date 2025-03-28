#ifndef BUFFER_H
#define BUFFER_H

#define BUFFER_SIZE 1024

/**
 * struct buffer_s - Structure pour gérer le tampon
 * @data: Tableau de caractères
 * @index: Position actuelle dans le tampon
 */
typedef struct buffer_s
{
	char data[BUFFER_SIZE];
	int index;
} buffer_t;

int flush_buffer(buffer_t *buf);

void add_to_buffer(buffer_t *buf, char c);

#endif /* BUFFER_H */

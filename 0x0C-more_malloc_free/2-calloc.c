#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of element
 * @size: size bytes
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int tb;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	tb = nmemb * size;

	ptr = malloc(tb);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < tb; i++)
		ptr[i] = 0;
	return (ptr);
}

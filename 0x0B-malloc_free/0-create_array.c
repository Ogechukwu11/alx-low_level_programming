#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @size: number of characters in the array
 * @c: character to initialize
 * Return: NULL if size is 0 else a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	if (size == 0)
		return (NULL);
	else if (size != 0)
		return (ptr);
	else
		return (NULL);
}

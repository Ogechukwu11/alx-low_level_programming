#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: destination of the copies
 * @src: copied memory area
 * @n: number of copied bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

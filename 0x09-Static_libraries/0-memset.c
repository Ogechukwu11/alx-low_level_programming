#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: a pointer
 * @b: constant byte
 * @n: number of bytes of the memory area pointed to by s
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

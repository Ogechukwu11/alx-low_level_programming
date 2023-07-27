#include "main.h"
#include <string.h>
/**
 * _strncat - a function that concatenates two strings
 * @dest: string1
 * @src: string2
 * @n: number of bytes to concatenate
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + 1] = *src;
		src++;
	}
	dest[len + 1] = '\0';
	return (dest);
}

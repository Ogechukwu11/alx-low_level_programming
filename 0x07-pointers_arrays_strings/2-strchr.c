#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: pointer of a string
 * @c: first character of the string
 * Return: s (success) or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (NULL);
}

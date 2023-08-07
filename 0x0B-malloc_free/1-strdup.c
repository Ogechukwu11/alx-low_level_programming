#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Entry point
 * @str: a string
 * Return: a pointer to a duplicated string
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *ptr;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	ptr = malloc((sizeof(char) * i) + 1);

	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}

	ptr[j] = '\0';
	return (ptr);
}

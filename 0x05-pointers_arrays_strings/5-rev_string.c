#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: reversed string
 * Return: always 0
 */

void rev_string(char *s)
{
	int i;
	char j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}
}

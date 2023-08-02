#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: a string
 * Return: s (success)
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

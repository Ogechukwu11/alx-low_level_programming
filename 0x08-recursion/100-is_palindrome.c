#include "main.h"
/**
 * _strlen - a function that returns length of a string
 * @s: a string
 * Return: length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * _compare - compares each character of the string
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Return: 0
 */

int _compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + _compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_compare(s, 0, _strlen(s) - 1));
}

#include "main.h"
/**
 * _islower - Checks for lowercase character
 * @c: lowercase character
 * Return: 1 if islower is lowercase, return 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

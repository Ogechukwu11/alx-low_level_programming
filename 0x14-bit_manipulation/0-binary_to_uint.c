#include "main.h"

/**
 * _strlen - To calculate the length of strings
 * @s: The string
 * Return: The length of the string
 */
unsigned int _strlen(const char *s)
{
	unsigned int count;
	unsigned int len = 0;

	for (count = 0; s[count] != '\0'; count++)
		len++;
	return (len);
}

/**
 * binary_to_uint - To converts a binary number to an unsigned int.
 * @b: The string of 0 and 1 chars
 * Return: The converted numbers
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	unsigned int mult = 1;
	int index;

	if (*b != '0' && *b != '1')
		return (0);

	index = _strlen(b) - 1;
	while (index >= 0)
	{
		if (b[index] == '0' || b[index] == '1')
		{
			convert += (b[index] - '0') * mult;
			mult *= 2;
		}
		else
		{
			return (0);
		}
		index--;
	}
	return (convert);
}

#include "main.h"

/**
 * binary_to_uint - To converts a binary number to an unsigned int.
 * @b: The string of 0 and 1 chars
 * Return: The converted numbers
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;

	if (*b != '0' && *b != '1')
		return 0;

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			convert = (convert << 1) | (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (convert);
}

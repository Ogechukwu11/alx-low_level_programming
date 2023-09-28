#include "main.h"

/**
 * binary_to_uint - To converts a binary number to an unsigned int.
 * @b: The string of 0 and 1 chars
 * Return: The converted numbers
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int count = 0;

	if (!b)
		return (0);

	while (b[count])
	{
		if (b[count] < '0' ||  b[count] > '1')
			return (0);
		convert = 2 * convert + (b[count] - '0');
		count++;
	}
	return (convert);
}

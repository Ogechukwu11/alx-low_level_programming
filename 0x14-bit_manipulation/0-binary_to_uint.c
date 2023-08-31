#include "main.h"
/**
 * binary_to_uint - To convert a binary number to an unsigned int
 * @b: The binary numbers to be converted
 * Return: The converted  number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0;
	int count;

	if (!b)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);
		d = 2 * d + (b[count] - '0');
	}
	return (d);
}

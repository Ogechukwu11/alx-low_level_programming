#include "main.h"
/**
 * clear_bit - To set the value of a bit to 0 at a given index.
 * @n: The numbers
 * @index: The index to clear
 * Return: 1 (success) else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}

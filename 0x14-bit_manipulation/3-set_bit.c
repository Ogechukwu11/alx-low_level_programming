#include "main.h"
/**
 * set_bit - To set the value of a bit to 1 at a given index.
 * @n: The number
 * @index: The index starting from 0
 * Return: 1 (success) else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}

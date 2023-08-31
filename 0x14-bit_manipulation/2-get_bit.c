#include "main.h"
/**
 * get_bit - To return the value of a bit at a given index.
 * @n: The numberss
 * @index: The index starting from 0
 * Return: The value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);
	b = (n >> index) & 1;

	return (b);
}

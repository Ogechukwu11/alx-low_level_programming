#include "main.h"

/**
 * get_bit - To return the value of a bit at a given index
 * @n: The number
 * @index: The index of the number
 * Return: The value of the bit at index 0 otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}

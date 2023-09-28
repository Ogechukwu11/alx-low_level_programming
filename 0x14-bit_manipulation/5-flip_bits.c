#include "main.h"

/**
 * flip_bits - A function that returns the num of bit to be flipped
 * @n: Num1
 * @m: Num2
 * Return: The number of bit to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int flip;

	flip = n ^ m;
	while (flip)
	{
		if (flip & 1UL)
			c++;
		flip = flip >> 1;
	}
	return (c);
}

#include "main.h"
/**
 * flip_bits - To flip one number to another
 * @n: num1
 * @m: num2
 * Return: The flipped numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f_val = n ^ m;
	unsigned int c = 0;

	while (f_val)
	{
		if (f_val & 1ul)
			c++;
		f_val = f_val >> 1;
	}
	return (c);
}

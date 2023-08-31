#include "main.h"
/**
 * print_binary - To print the binary representation of a number.
 * @n: The numbers
 * Return: The binary representation
 */

void print_binary(unsigned long int n)
{
	unsigned long int cu;
	int j, count = 0;

	for (j = 63; j >= 0; j--)
	{
		cu = n >> j;

		if (cu & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
		_putchar('0');
}

#include "main.h"

/**
 * print_binary - To print binary rep of a number
 * @n: The numbers to convert to binary
 * Return: The converted binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int recent;
	int i, c = 0;

	i = 63;
	while (i >= 0)
	{
		recent = n >> i;
		if (recent & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
		{
			_putchar('0');
		}
		i--;
	}
	if (!c)
		_putchar('0');
}

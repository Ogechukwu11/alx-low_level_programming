#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: the last digit
 * Return: the value of the last digit
 */

int print_last_digit(int c)
{
	int last;

	last = c % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

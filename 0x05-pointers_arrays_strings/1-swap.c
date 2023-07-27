#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: 0 always
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
#include "main.h"
/**
 * sq_fun - Entry point
 * @num: number
 * @r: square root
 * Return: 0
 */

int sq_fun(int num, int r)
{
	if ((r * r) > num)
	{
		return (-1);
	}
	else if ((r * r) == num)
	{
		return (r);
	}
	else
		return (sq_fun(num, r + 1));
}
/**
 * _sqrt_recursion - Entry point
 * @n: natural number
 * Return: -1 if not a natural number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sq_fun(n, 0));
}

#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of elements
 * Return: The sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count, result = 0;
	va_list mynum;

	va_start(mynum, n);

	if (n == 0)
		return (0);

	for (count = 0; count < n; count++)
	{
		result = result + va_arg(mynum, unsigned int);
	}
	va_end(mynum);

	return (result);
}

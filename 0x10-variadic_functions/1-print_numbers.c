#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count, result = 0;
	va_list prnum;

	va_start(prnum, n);

	for (count = 0; count < n; count++)
	{
		result = va_arg(prnum, unsigned int);
		printf("%d", result);

		if (separator != NULL && count < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}

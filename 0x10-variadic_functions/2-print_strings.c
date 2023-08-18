#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	const char *str;
	va_list mystr;

	va_start(mystr, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(mystr, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && count < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(mystr);
}

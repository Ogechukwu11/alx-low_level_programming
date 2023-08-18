#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list myarg;

	va_start(myarg, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			int a = va_arg(myarg, int);

			printf("%c, ", a);
		}
		else if (format[i] == 'i')
		{
			int j = va_arg(myarg, int);

			printf("%d, ", j);
		}
		else if (format[i] == 'f')
		{
			double b = va_arg(myarg, double);

			printf("%f, ", b);
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(myarg, char *);

			if (str == NULL)
				printf("nil");
			else
				printf("%s", str);
		}
		i++;
	}
	printf("\n");
}

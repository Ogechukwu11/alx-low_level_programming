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
	int i = 0;
	char *str, *sp = "";
	va_list myarg;

	va_start(myarg, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sp, va_arg(myarg, int));
				break;

			case 'i':
				printf("%s%d", sp, va_arg(myarg, int));
				break;

			case 'f':
				printf("%s%f", sp, va_arg(myarg, double));
				break;

			case 's':
				str = va_arg(myarg, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sp, str);
				break;
			default:
				i++;
				continue;
		}
		sp = ", ";
		i++;
	}
	printf("\n");
	va_end(myarg);
}

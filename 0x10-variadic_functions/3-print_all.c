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
	char *str;
	va_list myarg;

	va_start(myarg, format);

	if (format)
	{
	while (format[i])
	{
	switch (format[i])
	{
	case 'c':
		printf("%c, ", va_arg(myarg, int));
		break;

	case 'i':
		printf("%d, ", va_arg(myarg, int));
		break;

	case 'f':
		printf("%f, ", va_arg(myarg, double));
		break;

	case 's':
		str = va_arg(myarg, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		break;
	default:
		i++;
		continue;
	}
	i++;
	}
	printf("\n");
	}
	va_end(myarg);
}

#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that prints a name
 * @name: a pointer to a string
 * @f: a pointer to a function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that executes a function given as a parameter
 * @array: a pointer to an array
 * @size: size of the array
 * @action: a pointer to a function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int it;

	if (array == NULL || action == NULL)
		return;

	for (it = 0; it < size; it++)
	{
		action(array[it]);
	}
}

#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: first number of element
 * @max: second number of element
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int num, i;
	int *ptr;

	if (min > max)
		return (NULL);
	num = max - min;

	ptr = malloc((sizeof(*ptr) * num) + sizeof(*ptr));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}

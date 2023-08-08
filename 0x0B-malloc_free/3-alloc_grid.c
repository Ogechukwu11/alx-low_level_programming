#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Entry point
 * @width: first array
 * @height: second array
 * Return: a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			free(ptr[i]);
			for (j = 0; j < height; j++)
				free(ptr[j]);
			return (NULL);
		}
		for (j = 0; j < widht; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}

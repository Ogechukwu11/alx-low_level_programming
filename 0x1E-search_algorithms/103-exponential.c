#include "search_algos.h"

/**
 * binary_search - A function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: value is the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid, i;

	if (array == NULL || size == 0)
		return (-1);
	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t left = bound / 2;
	size_t right = (bound < size - 1) ? bound : size - 1;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (binary_search(array, size, value));
}

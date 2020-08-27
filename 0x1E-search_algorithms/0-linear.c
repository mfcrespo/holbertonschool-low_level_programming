#include "search_algos.h"

/**
 * linear_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		else
			i++;
	}
	return (-1);
}

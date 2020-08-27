#include "search_algos.h"
#include <math.h>
/**
 *jump_search - function that searches for a value in a sorted array
 *of integers using the Jump search algorithm
 *@array: a pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value: the value to search for
 *Return: If value is not present in array or if array is NULL,
 *your function must return -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t jump = 0;
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (i * step <= size)
	{
		if (array[i * step] < value)
		{
			printf("Value checked array[%lu] ", i * step);
			printf("= [%i]\n", array[i * step]);
			i++;
			if (i != 0)
				jump = i - 1;
		}

		else
		{
			printf("Value found between ");
			printf("indexes [%lu] ", jump * step);
			printf("and [%lu]\n", i * step);
			jump = jump * step;
			while (jump <= i * step)
			{
				printf("Value checked array[%lu] ", jump);
				printf("= [%i]\n", array[jump]);
				if (array[jump] == value)
					return (jump);
				jump++;
			}
			return (-1);
		}
	}
	printf("Value found between indexes [%lu] ", jump * step);
	printf("and [%lu]\n", i * step);
	printf("Value checked array[%lu] ", jump * step);
	printf("= [%i]\n", array[jump * step]);
	return (-1);
}

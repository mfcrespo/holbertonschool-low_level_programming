#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: pointer to array
 * @size: size of the array
 * @action: is a pointer to the function you need tu use
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;
	for (; i < size; i++)
		(*action)(*(array + 1));
}

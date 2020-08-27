#include "search_algos.h"

/**
 *binary_search - function that searches for a value in a sorted
 *array of integers using the Binary search algorithm
 *@array: a pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value: the value to search for
 *Return: If value is not present in array or if array is NULL,
 *your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary(array, 0, size - 1, value));
}

/**
 *print_array - prints the array to be searched
 *@array: a pointer to the first element of the array to search in
 *@head: the starting point of the array
 *@end: the ending point of the array
 *
 *Return: void
 */
void print_array(int *array, size_t head, size_t end)
{
	size_t i = head;

	printf("Searching in array: ");
	while (i <= end)
	{
		printf("%i", array[i]);
		if (i != end)
			printf(", ");
		else
			printf("\n");
		i++;
	}
}

/**
 *binary - searches for a value in sorted array of integers
 *@array: a pointer to the first element of the array to search in
 *@sub_head: the starting index of the subarray
 *@sub_end: the ending index of the subarray
 *@value: the value to find
 *Return: the index of the value or -1 if not found
 */
int binary(int *array, size_t sub_head, size_t sub_end, int value)
{
	size_t middle;

	middle = (sub_end + sub_head) / 2;

	if (sub_head > sub_end)
		return (-1);

	print_array(array, sub_head, sub_end);

	if (array[middle] == value)
		return (middle);

	if (array[middle] > value)
		return (binary(array, sub_head, middle - 1, value));

	if (array[middle] < value)
		return (binary(array, middle + 1, sub_end, value));

	return (-1);
}

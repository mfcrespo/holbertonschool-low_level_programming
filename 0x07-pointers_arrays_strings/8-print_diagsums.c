#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of diagonals
 * @a: pointer
 * @size : limit
 *
 */

void print_diagsums(int *a, int size)
{
	int x, y, res1, res2;

	res1 = 0;
	res2 = 0;
	for (x = 0; x < size; x++)
		res1 += a[(size + 1) * x];

	for (y = 0; y < size; y++)
		res2 += a[(size - 1) * (y + 1)];

	printf("%d, %d\n", res1, res2);
}

#include "holberton.h"
/**
 *swap_int - swaps the values of two integers
 *@a: Integer 1
 *@b: Integer 2
 *
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

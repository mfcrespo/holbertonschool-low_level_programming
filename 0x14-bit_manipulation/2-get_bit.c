#include <stdio.h>
#include "holberton.h"

/**
 *get_bit - function that returns the value of a bit at a given index.
 *@n: number to point at
 *@index: the index, starting from 0 of the bit you want to get
 *
 *Return: the bit at index (0 or 1) or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int position;

	position = 1UL << index;
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	if ((n & position) == 0)
		return (0);
	else
		return (1);
}

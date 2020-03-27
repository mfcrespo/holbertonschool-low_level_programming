#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 * Return: 1 or -1.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	if (!(n == m))
	{
		for (i = 0; !(n == m); )
		{
			if (n == 0 && m == 0)
			{
				break;
			}

			if (!((n & 1) == (m & 1)))
			{
				i++;
			}

			n = n >> 1;
			m = m >> 1;
		}
	}
	return (i);
}

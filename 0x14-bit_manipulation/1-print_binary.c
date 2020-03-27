#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * print_binary - function that prints the binary representation of a number.
 *@n: Binary number
 * Return: Void.
 */

void print_binary(unsigned long int n)
{
	unsigned int i = 0;
	int start = 0;
	unsigned long int biggest;

	biggest = biggest << ((sizeof(unsigned long int) * 8) - 1);
	while (i < sizeof(unsigned long int) * 8)
	{
		if ((n & biggest) != 0)
			start = 1;
		if (start == 1)
		{
			if ((n & biggest) == 0)
				_putchar('0');
			else
				_putchar('1');
		}
		biggest = biggest >> 1;
		i++;
	}
	if (start == 0)
		_putchar('0');
}

#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 *@b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int convert = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			convert = (convert * 2) + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (convert);
}

#include "holberton.h"
/**
 *_isdigit - checks for a digit (0 through 9)
 *@c: arbitrary character
 *
 *Description: This function returns 1 if c is digit
 *and 0 otherwise
 *Return: 1 if a digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}

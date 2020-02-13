#include "holberton.h"
/**
 *_isupper - checks for uppercase character
 *@c: arbitrary character
 *
 *Description: This function returns 1 if c is uppercase
 *and 0 otherwise
 *Return: 1 if a uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

#include "holberton.h"
/**
 *_isalpha - Decides if a letter, lowercase or uppercase
 *@c: arbitrary character
 *
 *Description: This function returns 1 if c is a letter, lowercase or uppercase
 *and 0 otherwise
 *Return: 1 if a letter, lowercase or uppercase, 0 if not
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

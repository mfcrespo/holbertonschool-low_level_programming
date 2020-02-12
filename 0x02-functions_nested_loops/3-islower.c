#include "holberton.h"
/**
 *_islower - Check if character is lowercase letter
 *@c: arbitrary character
 *
 *Description: This function returns 1 if the character is lowercase
 *and 0 if the character is not lowercase
 *Return: 1 if lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}

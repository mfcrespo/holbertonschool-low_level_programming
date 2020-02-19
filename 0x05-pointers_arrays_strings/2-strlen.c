#include "holberton.h"
/**
 *_strlen - function that returns the length of a string
 *@s: string aleatory
 *Return: length of string
 */

int _strlen(char *s)
{
	char *c;
	int length = 0;

	c = s;
	while (*c != '\0')
	{
		length++;
		c++;
	}
	return (length);
}

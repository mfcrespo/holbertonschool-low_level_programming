#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates an array of chars and initializes with specific char
 *@size: size of
 *@c: character to initialize it
 *Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arraychar;

	if (size == 0)
		return (NULL);

	arraychar = malloc(sizeof(char) * size);

	if (arraychar == NULL)
		return (NULL);

	while (i < size)
	{
		*(arraychar + i) = c;
		i++;
	}

	return (arraychar);
}

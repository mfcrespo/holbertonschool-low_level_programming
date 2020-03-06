#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - function that allocates memory using malloc
 *if malloc fails, the malloc_checked function should cause
 *normal process termination with a status value of 98
 *@b: pointer
 *Return: success p - Error 98
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	else
	return (p);
}

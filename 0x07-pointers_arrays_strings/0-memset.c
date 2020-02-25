#include "holberton.h"
/**
 **_memset - function that fills memory with a constant byte.
 *Prototype: char *_memset(char *s, char b, unsigned int n);
 *@s: memory area
 *@b: the constant byte
 *@n: the first n bytes of the memory
 *Return: a pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}

#include "holberton.h"
/**
 **_memcpy - function that copies memory area
 *Prototype: char *_memcpy(char *dest, char *src, unsigned int n)
 *@dest: memory area destin
 *@src: memory area source
 *@n: copies n bytes of the memory
 *Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}

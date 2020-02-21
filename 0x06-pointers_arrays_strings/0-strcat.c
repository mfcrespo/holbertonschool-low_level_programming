#include "holberton.h"
/**
 **_strcat - function that concatenates two strings
 *Prototype: char *_strcat(char *dest, char *src);
 *@dest: detination string
 *@src: source string
 *This function appends the src string to the dest string,
 *overwriting the terminating null byte (\0) at the end of dest,
 *and then adds a terminating null byte
 *Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *starting_point = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (starting_point);
}

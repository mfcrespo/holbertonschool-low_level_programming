#include "holberton.h"
/**
 **_strncpy - copies a string
 *The _strncpy function is similar to the strcpy function
 *@dest: destination string
 *@src: source string
 *@n: bytes to concatenate
 *Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *starting_point = dest;
	int positions = 0;

	while (positions < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		positions++;
	}
	while (positions < n)
	{
	*dest = '\0';
	positions++;
	dest++;
	}
	return (starting_point);
}

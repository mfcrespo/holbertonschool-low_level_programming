#include "holberton.h"
/**
 **_strncat - concatenates two strings
 *The _strncat function is similar to the _strcat function,
 *except that it will use at most n bytes from src; and
 *src does not need to be null-terminated if it contains n or more bytes
 *@dest: destination string
 *@src: source string
 *@n: bytes to concatenate
 *Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *starting_point = dest;
	int positions = 0;

	while (*dest != '\0')
		dest++;

	while (positions < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		positions++;
	}
	*dest = '\0';
	return (starting_point);
}

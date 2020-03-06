#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - function that concatenates two strings
 * The returned pointer shall point to a newly allocated
 *@s1: string1
 *@s2: string2
 *@n: limit for string2
 *Return: is fail return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int length1, length2, total;
	unsigned int counts1, counts2;

	counts1 = 0;
	counts2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	if (n >= length2)
		total = length1 + length2 + 1;
	else
		total = length1 + n + 1;

	str = malloc(total * sizeof(char));
	if (str == NULL)
		return (NULL);

	while (*(s1 + counts1) != '\0')
	{
		*(str + counts1) = *(s1 + counts1);
		counts1++;
	}
	if (n >= length2)
		while (*(s2 + counts2) != '\0')
		{
			*(str + counts1) = *(s2 + counts2);
			counts1++;
			counts2++;
		}
	*(str + counts1) = '\0';
	return (str);
}

/**
 *_strlen - finds the length of a string
 *@str: string to find length of
 *
 *Return: string length
 */
unsigned int _strlen(char *str)
{
	int counter = 0;
	int length = 0;

	while (*(str + counter) != '\0')
	{
		length++;
		counter++;
	}
	return (length);
}

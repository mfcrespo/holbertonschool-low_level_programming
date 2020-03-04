#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string to concatenate to first
 *
 *Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	char *concatenate;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		*s2 = '\0';
	}

	length1 = _strlen(s1);
	length2 = _strlen(s2);

	concatenate = malloc(sizeof(char) * (length1 + length2 + 1));
	if (concatenate == NULL)
		return (NULL);

	return (_concat(concatenate, s1, s2));
}

/**
 *_strlen - calculates the length of a string
 *@str: string to calculate the length of
 *
 *Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;
	int length = 0;

	while (*(str + i) != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

/**
 *_concat - concatenates two strings
 *@concatenate: memory space to concatenate the strings
 *@s1: string 1
 *@s2: string 2
 *
 *Return: pointer to concatenated space
 */
char *_concat(char *concatenate, char *s1, char *s2)
{
	int counterconcat = 0;
	int counterstring = 0;

	while (*(s1 + counterstring) != '\0')
	{
		*(concatenate + counterconcat) = *(s1 + counterstring);
		counterconcat++;
		counterstring++;
	}

	counterstring = 0;
	while (*(s2 + counterstring) != '\0')
	{
		*(concatenate + counterconcat) = *(s2 + counterstring);
		counterconcat++;
		counterstring++;
	}
	*(concatenate + counterconcat) = '\0';
	return (concatenate);
}

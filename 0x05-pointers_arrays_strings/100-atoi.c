#include "holberton.h"

/**
  * _atoi - function that convert a string to an integer
  * @s: string to convert
  * Return: 0
  */

int _atoi(char *s)
{
	int i;
	unsigned int number = 0;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > '9' || s[i] < '0')
			return (-1);
	i++;
	}
	while (s[i] != '\0')
		number = number * 10 + (s[i] - '0');
	i++;
	return (number);
}

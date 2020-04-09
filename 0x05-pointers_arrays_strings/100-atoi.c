#include "holberton.h"

/**
  * _atoi - function that convert a string to an integer
  * @s: string to convert
  * Return: number
  */

int _atoi(char *s)
{
	int i, sign;
	unsigned int number;

	i = number = 0;
	sign = 1;
	for (; (!(s[i] >= 48 && s[i] <= 57)) && s[i] != '\0'; i++)
	{
		if (s[i] == 45)
			sign = sign * -1;

	}
	if (s[i] == '\0')
		return (number);
	for (; (s[i] >= 48 && s[i] <= 57) && s[i] != '\0'; i++)
	{
		number = (number * 10) + (s[i] - 48);
	}
	return (number * sign);
}

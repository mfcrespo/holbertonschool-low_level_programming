#include "holberton.h"
/**
 *cap_string - capitalizes all words of a string
 *@str: string to be acted upon
  *Return: pointer to string
 */

char *cap_string(char *str)
{
	char *starting_point = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			if (*str == *starting_point ||
			    *(str - 1) == ' ' ||
			    *(str - 1) == '\t' ||
			    *(str - 1) == '\n' ||
			    *(str - 1) == ',' ||
			    *(str - 1) == ';' ||
			    *(str - 1) == '.' ||
			    *(str - 1) == '!' ||
			    *(str - 1) == '?' ||
			    *(str - 1) == '"' ||
			    *(str - 1) == '(' ||
			    *(str - 1) == ')' ||
			    *(str - 1) == '{' ||
			    *(str - 1) == '}')
				*str = *str - 32;
		str++;
	}
	return (starting_point);
}

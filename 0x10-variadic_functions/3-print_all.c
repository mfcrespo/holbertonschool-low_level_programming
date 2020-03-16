#include <stdio.h>
#include "variadic_functions.h"

/**
 *printch - prints a character
 *@list: the va_list or arguments that passed a function
 *Return: nothing
 */

void printch(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 *printin - prints an integers
 *@list: the va_list or arguments that passed a function
 *Return: nothing
 */

void printin(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 *printfl - prints a float
 *@list: the va_list or arguments that passed a function
 *Return: nothing
 */
void printfl(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 *printst - prints a string
 *@list: the va_list or arguments that passed a function
 *Return: nothing
 */
void printst(va_list list)
{
	char *string;

	string = va_arg(list, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
/**
 *print_all - function that prints anything
 *@format: list of types arguments that passed a function
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list printformat;
	int i, countformat = 0;
	char *nothing = "";
	char *commaspace = ", ";
	char *last = nothing;
	type_t datatype[] = {
		{"c", printch},
		{"i", printin},
		{"f", printfl},
		{"s", printst},
		{NULL, NULL}};

	va_start(printformat, format);
	while (format != NULL && format[countformat] != '\0')
	{
		i = 0;
		while (datatype[i].data != NULL)
		{
			if (format[countformat] == *(datatype[i].data))
			{
				printf("%s", last);
				(datatype[i].correctformat)(printformat);
				last = commaspace;
			}
			i++;
		}
		countformat++;
	}
	printf("\n");
	va_end(printformat);
}

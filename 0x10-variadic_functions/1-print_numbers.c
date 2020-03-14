#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers
 *@n: number of integers
 *@separator: string to be printed between numbers
 *Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i != n - 1 && separator != NULL)
		       printf ("%s", separator);
	}
	printf ("\n");
		va_end(numbers);
}

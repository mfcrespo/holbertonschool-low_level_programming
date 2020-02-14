#include "holberton.h"
/**
 *print_line - Draws a straight line in the terminal
 *@n: number of times the character _ should be printed
 *
 *Return: void
 */
void print_line(int n)
{
	int counter = 0;

	while (counter < n)
	{
		_putchar('_');
		counter++;
	}
	_putchar('\n');
}

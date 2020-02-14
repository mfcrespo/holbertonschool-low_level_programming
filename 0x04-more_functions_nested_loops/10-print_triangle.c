#include "holberton.h"
/**
 *print_triangle - prints a triangle, followed by a new line
 *@size: size of the triangle
 *
 *Prototype: void print_triangle(int size);
 *You can only use _putchar function to print
 *Where size is the size of the triangle
 *If size is 0 or less, the function should print only a new line
 *Use the character # to print the triangle
 *Return: void
 */
void print_triangle(int size)
{
	int spaces = 1;
	int pounds = 1;
	int rows = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (rows <= size)
	{
		spaces = 1;
		pounds = 1;
		while (spaces <= (size - rows))
		{
			_putchar(' ');
			spaces++;
		}
		while (pounds <= rows)
		{
			_putchar('#');
			pounds++;
		}
		_putchar('\n');
		rows++;
	}
}

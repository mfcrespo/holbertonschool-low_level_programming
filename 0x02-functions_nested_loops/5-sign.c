#include "holberton.h"
/**
 *print_sign - Decides the sign of a number
 *@n: arbitrary character
 *
 *Description: function returns 1 and print + if c is n is grater than zero
 *Returns 0 and prints 0 if n is zero
 *Returns -1 and prints - if n is less than zero
 *Return: 1 if n>0, 0 if n==0, -1 if n<0
 */

int print_sign(int n)
{
	if (n > '0')
	{_putchar("+");
		return (1);
	}
	else if (n == '0')
	{_putchar ("0");
		return (0);
	}
	else
	{_putchar ("-");
		return (-1);
}

#include "holberton.h"

/**
 *print_alphabet - Entry point
 *Description: Write a function that prints the alphabet,
 *in lowercase, followed by a new line
 *Prototype: void print_alphabet(void)
 *You can only use _putchar twice in your code
 *Return: 0
 */

void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar (letter);
		letter++;
	}
	_putchar ('\n');
}

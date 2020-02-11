#include "holberton.h"

/**
 *print_alphabet_x10 - Entry point
 *Description: Write a function that prints 10 times the alphabet,
 *in lowercase, followed by a new line
 *Prototype: void print_alphabet_x10(void)
 *You can only use _putchar twice in your code
 *Return: 0
 */

void print_alphabet_x10(void)

{
	int letter;
	int counter = 0;

	while (counter < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar (letter);
				  letter++;
		}
		_putchar ('\n');
		counter++;
	}
}

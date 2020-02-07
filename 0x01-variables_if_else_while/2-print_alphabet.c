#include <stdio.h>
/**
 *main - use the putchar function
 *
 *Description: program that prints the alphabet in lowercase,
 *followed by a new line
 *Return: Returns 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

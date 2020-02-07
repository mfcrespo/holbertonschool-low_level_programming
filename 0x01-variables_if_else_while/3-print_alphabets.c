#include <stdio.h>
/**
 *main - use the putchar function
 *
 *Description: program that prints the alphabet in lowercase,
 *and then in uppercase, followed by a new line
 *Return: Returns 0
 */

int main(void)
{
	char letter = 'a', letter1 = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

		while (letter1 <= 'Z')
		{
			putchar(letter1);
			letter1++;

		}
		putchar('\n');
		return (0);
}

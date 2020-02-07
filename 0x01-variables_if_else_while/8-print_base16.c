#include <stdio.h>
/**
 *main - prints all the numbers of base 16 in lowercase, followed by a new line
 *Return: 0
 */
int main(void)
{
	char num = '0';
	char letter = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

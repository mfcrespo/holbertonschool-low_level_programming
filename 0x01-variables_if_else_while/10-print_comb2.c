#include <stdio.h>
/**
 *main - prints the numbers from 00 to 99
 *Numbers must be separated by ,, followed by a space
 *Numbers should be printed in ascending order, with two digits
 *Return: 0
 */

int main(void)
{
	int num = 0;

	while (num < 100)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');
		if (num != 99)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}

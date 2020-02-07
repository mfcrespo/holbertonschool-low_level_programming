#include <stdio.h>
/**
 *main - prints all single digit numbers of base 10 starting from 0
 *
 *Description: The function prints all single digit numbers of base 10 starting
 *from 0. You are not allowed to use any variable of type char
 *Return: 0
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}

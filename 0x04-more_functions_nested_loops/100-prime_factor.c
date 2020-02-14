#include <stdio.h>
/**
 *main - finds and prints the largest prime factor of the number
 *612852475143, followed by a new line.
 *
 *Return: 0
 */
int main(void)
{
	long int number = 612852475143;
	long int factor = 2;

	while (factor <= number)
	{
		if (number % factor == 0)
		{
			number = number / factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%lu\n", factor);
	return (0);
}

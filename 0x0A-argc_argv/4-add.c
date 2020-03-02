#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - Write a program that adds positive numbers
 *@argc: number of command line arguments
 *@argv: array of pointers to argument strings
 *
 *Description: Adds positive numbers
 *Return: 0 when successful, 1 when there are no digits
 */
int main(int argc, char *argv[])
{
	int add = 0, co = 1;

	while (co < argc)
	{
		int co1 = 0;

		add = add + atoi(argv[co]);

		while (argv[co][co1] != '\0')
		{
			if (!(isdigit(argv[co][co1])) || atoi(argv[co]) < 1)
			{
				printf("Error\n");
				return (1);
			}
			co1++;
		}
		co++;
	}

	printf("%d\n", add);

	return (0);
}

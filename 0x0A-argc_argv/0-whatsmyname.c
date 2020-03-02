#include <stdio.h>
/**
 *main - Write a program that prints its name, followed by a new line
 *@argc: number of command line arguments
 *@argv: array of pointers to argument strings
 *
 *Description: Prints the program's name followed by newline
 *Return: 0 when successfully run
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

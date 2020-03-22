#include <stdio.h>
#include "lists.h"
/**
 *printphrase - prints some text before main function is executed
 *
 *Return: void
 */

void printphrase(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*print_dlistint - Write a function that prints all the
*elements of a dlistint_t list
*@h: lists of structures
*Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}
	return (elements);
}

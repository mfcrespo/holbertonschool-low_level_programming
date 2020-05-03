#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*dlistint_len - Write a function that returns the number of
*elements in a linked dlistint_t list
*@h: head of the list
*Return: the elements of list
*/

size_t dlistint_len(const dlistint_t *h)

{
	size_t elements = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*get_dnodeint_at_index - Write a function that returns the nth
*node of a dlistint_t linked list.
*@head: head of the list
*@index: index of the node, starting from 0
*Return: if the node does not exist, return NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
	size_t nodes = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		nodes++;
		if (nodes - 1 == index)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}

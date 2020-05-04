#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*insert_dnodeint_at_index - Write a function that inserts a
*new node at a given position.
*@h: head of the list
*@idx: index of the list where the new node should be added. Index starts at 0
*@n: the value of the new node of the list
*Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *temp;
	size_t count = 0;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*h == NULL)
	{
		*h = node;
		node->next = NULL;
		return (node);
	}
	temp = *h;
	if (idx == 0)
	{
		node->next = temp;
		temp->prev = node;
		*h = node;
		return (node);
	}

	while (count != (idx - 1))
	{
		temp = temp->next;
		count++;
		if (temp == NULL)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = temp->next;
	node->prev = temp;
	if (temp->next == NULL)
	{
		temp->next = node;
	}
	else
	{
		temp->next->prev = node;
		temp->next = node;
	}
	return (node);
}

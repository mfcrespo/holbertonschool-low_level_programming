#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end - function that adds a new node at the
 *end of a listint_t list.
 *@head: pointer to the start of the list
 *@n: the value of the added node
 *
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temporal;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	temporal = *head;

	if (temporal == NULL)
		*head = newnode;

	else
	{
		while (temporal->next != NULL)
			temporal = temporal->next;
		temporal->next = newnode;
	}
	return (newnode);
}

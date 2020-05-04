#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*add_dnodeint_end - Write a function that adds a newnode node at the
*end of a dlistint_t list.
*@head: head of the list
*@n: the value of the newnode node of the list
*Return: address of the newnode element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *newnode;
	dlistint_t *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}

	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		newnode->prev = temp;
		temp->next = newnode;
	}
	return (newnode);
}

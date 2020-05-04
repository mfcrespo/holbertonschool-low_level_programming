#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*free_dlistint - Write a function that free a dlistint_t list.
*@head: head of the list
*Return: void
*/

void free_dlistint(dlistint_t *head)

{
	dlistint_t *temp;

	if (head == NULL)
		return;

	temp = head->next;
	while (temp != NULL)
	{
		free(head);
		head = temp;
		temp = temp->next;
	}
	free(head);
}

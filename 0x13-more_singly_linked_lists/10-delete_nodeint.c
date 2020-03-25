#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - function that deletes the node at
 *index index of a listint_t linked list.
 *@head: pointer to the memory location of the head pointer
 *@index: index of element to delete
 *
 *Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodes = 0;
	listint_t *indexmod = *head, *indexpos = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(indexpos);
		return (1);
	}
	while (nodes != index)
	{
		if (nodes == index - 1)
			indexmod = indexpos;
		indexpos = indexpos->next;
		if (indexpos == NULL)
			return (-1);
		nodes++;
	}
	indexmod->next = indexpos->next;
	free(indexpos);
	return (1);
}

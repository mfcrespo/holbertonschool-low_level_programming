#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*sum_dlistint - Write a function that returns the sum of all
*the data (n) of a dlistint_t linked list.
*@head: head of the list
*Return: if the list is empty, return 0
*/

int sum_dlistint(dlistint_t *head)

{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}

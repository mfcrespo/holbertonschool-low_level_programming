#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *stringlen - calculates the length of a string
 *@str: pointer to the string
 *
 *Return: the length of the string
 */
unsigned int stringlen(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *add_node_end - adds a new node at the end of a linked list
 *@head: pointer to the head of the list
 *@str: string to add to the string field of the structure added
 *
 *Return: the address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *end;

	end = *head;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = stringlen(str);
	newnode->next = NULL;
	if (end == NULL)
		*head = newnode;
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = newnode;
	}
	return (newnode);
}

#include <string.h>
#include <stdlib.h>
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
 *add_node - adds a new node to beginning of a linked list
 *@head: the head pointer of the linked list
 *@str: the string to add to the node field called str
 *
 *Return: the address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = stringlen(str);
	newnode->next = *head;
	*head = newnode;
	return (*head);
}

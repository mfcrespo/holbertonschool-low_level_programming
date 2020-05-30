#include "hash_tables.h"
/**
 *hash_table_set - Write a function that adds an element to the hash table
 *@ht: hash table you want to add or update the key/value to
 *@key: is the key. key can not be an empty string
 *@value: is the value associated with the key.
 *value must be duplicated. value can be an empty string
 *
 *Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;
	hash_node_t *temp;

	if (ht == NULL)
		return (0);
	if (key == NULL || key[0] == '\0')
		return (0);
	if (ht->size == 0 || ht->array == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	if (ht->array[index] != NULL)
		new->next = ht->array[index];
	else
		new->next = NULL;

	ht->array[index] = new;
	return (1);
}

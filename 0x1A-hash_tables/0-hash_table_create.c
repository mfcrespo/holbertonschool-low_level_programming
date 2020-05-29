#include "hash_tables.h"
/**
 *hash_table_create - Write a function that creates a hash table
 *@size: the size of the array
 *
 *Return: a pointer to the newly created hash table,
 *If something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **hash_array;
	hash_table_t *hash_table;
	unsigned long int index = 0;

	hash_array = malloc(sizeof(hash_node_t *) * size);
	if (hash_array == NULL)
		return (NULL);

	while (index < size)
	{
		hash_array[index] = NULL;
		index++;
	}

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		free(hash_array);
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = hash_array;

	return (hash_table);
}

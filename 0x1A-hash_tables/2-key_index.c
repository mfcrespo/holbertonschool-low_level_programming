#include "hash_tables.h"

/**
 *key_index - Write a function that gives you the index of a key
 *@key: is the key
 *@size: the size of the array of the hash table
 *
 *Return: the index at which the key/value pair should be
 *stored in the hash table array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}

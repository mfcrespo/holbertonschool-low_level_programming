#include "hash_tables.h"
/**
 *hash_djb2 - Write a hash function implementing the djb2 algorithm
 *@str: string used to generate hash value
 *
 *Return: the hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}

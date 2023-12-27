#include "hash_tables.h"
/**
 * key_index - get index in hash table
 * @key: string to generate key number
 * @size: length of hash table
 * Return: index in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
		return (0);

	return (hash_djb2(key) % size);
}

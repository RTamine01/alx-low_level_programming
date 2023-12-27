#include "hash_tables.h"
/**
 * hash_djb2 - djb2 algorithm
 * @str: string used to generate hash value
 * Return: hash table
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashe;
	int c;

	hashe = 5381;
	while ((c = *str++))
	{
		hashe = hashe * 33 + c;
	}
	return (hashe);
}

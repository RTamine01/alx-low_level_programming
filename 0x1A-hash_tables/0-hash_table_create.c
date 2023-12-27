#include "hash_tables.h"
/**
 * hash_table_create - create a hash table of BUFF_SIZE
 * @size: length of new hash tab
 * Return: new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_tab = NULL;
	unsigned long int i;

	new_tab = malloc(sizeof(hash_table_t));
	if (new_tab == NULL)
		return (NULL);

	new_tab->array = malloc(sizeof(hash_node_t *) * size);
	if (new_tab->array == NULL)
	{
		free(new_tab);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_tab->array[i] = NULL;
	}
	new_tab->size = size;

	return (new_tab);
}

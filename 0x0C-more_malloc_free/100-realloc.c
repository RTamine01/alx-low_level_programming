#include "main"

/**
 * *_realloc - allocates a memory block using malloc and free
 * @ptr: pointer to memory allocated with malloc(old_size)
 * @old_size: size of the allocated space for ptr in bytes
 * @new_size: size of the new memory block in bytes
 * Return: NULL if new_size = 0 and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);
		return (p);
	}
	else
	{
		if (new_size == 0)
		{
			free(p);
			return (NULL);
		}
	}
	p = malloc(new_size);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		p[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (p);
}

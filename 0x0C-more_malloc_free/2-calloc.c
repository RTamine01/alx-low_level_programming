#include "main.h"

/**
 * * _calloc - allocate memory using malloc and initialize it to zero
 * *@nmemb: number of elements
 * *@size: size of the memory block to be allocated
 * *
 * *Return: poiner to the address of the memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x
	unsigned int s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x != NULL)
	{
		for (s = 0; s < (nmemb * size); s++)
			x[s] = 0;
		return (x);
	}
	else
		return (NULL);
}

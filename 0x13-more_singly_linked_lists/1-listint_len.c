#include "lists.h"

/**
 * listint_len - print a linked list
 * @h: pointer to first node
 *
 * Return: size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}

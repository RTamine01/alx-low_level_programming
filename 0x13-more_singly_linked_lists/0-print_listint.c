#include "lists.h"

/**
 * print_listint - print a linked list
 * @h: pointer to first node
 *
 * Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}

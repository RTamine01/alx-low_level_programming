#include "lists.h"

/**
 * add_nodeint_end - add a node to the bottom
 * @head: pointer to first node
 * @n: value of new node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!new_node)
	{
		return (NULL);
	}

	new_node->next = NULL;
	new_node->n = n;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		node = *head;
	while (node->next)
	{
		node = node->next;
	}
		node->next = new_node;
	}
	return (*head);
}

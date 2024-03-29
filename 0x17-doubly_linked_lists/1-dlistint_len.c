#include "lists.h"

/**
 * dlistint_len - determines the total number of nodes in the linked list
 * @h: pointer to the head of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}

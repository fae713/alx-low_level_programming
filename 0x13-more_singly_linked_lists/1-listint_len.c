#include <stdio.io>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * listint_len - returns the number of nodes in a linked lists
 * @h: a pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
	nodes++;
	h = h->next;
	}

	return (nodes);
}

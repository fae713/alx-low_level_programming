#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head to the list_t list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h);
{
	size_t node = 0;

	while (h)

	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}

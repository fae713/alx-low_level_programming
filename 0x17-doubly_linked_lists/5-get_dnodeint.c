#include "lists.h"

/**
 * get_dnodeint_at_index - runs the nth node of a dlistint list
 * @head: points to the head of the list.
 * @index: index of the node starting from 0
 *
 * Return: pointer to the indexed node, or NULL if non-existent
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

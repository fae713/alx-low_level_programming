#include "lists.h"

/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
	listint_t *pop_del;

	int node_data;

	if (*head == NULL)

	return (0);

	pop_del = *head;

	node_data = pop_del->n;

	free(pop_del);

	*head = (*head)->next;

	return (node_data);

}

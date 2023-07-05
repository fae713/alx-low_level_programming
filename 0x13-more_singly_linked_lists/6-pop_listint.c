#include "lists.h"

/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
	listint_t *popdel;

	int nodedata;

	if (*head == NULL)

	return (0);

	popdel = *head;

	nodedata = popdel->n;

	free(popdel);

	*head = (*head)->next;

	return (nodedata);

}

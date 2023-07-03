#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - creates and add a new node at the head of a linked list
 * @head: this is a pointer to the list's head
 * @str: string to be added
 *
 * Return: returns the address of the new elements, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

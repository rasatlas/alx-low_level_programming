#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 *
 * @head: pointer to a pointer of type list_t.
 * @str: string data of struct.
 *
 * Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new, *current;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (strdup(str) == NULL)
	{
		free(new);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		return (new);
	}
}

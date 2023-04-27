#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 *
 * @head: pointer to a pointer of type list_t.
 * @str: string data of struct.
 *
 * Return -  the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *newNode;
	int i;

	current = *head;

	while (current && current->next != NULL)
	current = current->next;

	for (i = 0; str[i] != '\0'; i++)
		;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
		newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = i;
	newNode->next = NULL;

	if (current)
		current->next = newNode;
	else
		*head = newNode;
	return (newNode);
}

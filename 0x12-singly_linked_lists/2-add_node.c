#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to a pointer.
 * @str: char string.
 *
 * Return: retursn the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int len;

	newNode = (list_t *) malloc(sizeof(list_t));

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
		for (len = 0; str[len] != '\0'; len++)
			;

	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

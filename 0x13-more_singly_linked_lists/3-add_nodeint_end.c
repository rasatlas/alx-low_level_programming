#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end
 * of a listint_t list.
 *
 * @head: head of the list.
 * @n: value of the node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *newNode;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (current)
		current->next = newNode;
	else
		*head = newNode;
	return (newNode);
}

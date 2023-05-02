#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;
	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}

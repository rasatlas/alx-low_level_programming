#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 *
 * @head: head of the list.
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

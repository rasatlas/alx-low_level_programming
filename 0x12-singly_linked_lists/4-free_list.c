#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 *
 * @head: pointer to a struct of type list_t.
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}

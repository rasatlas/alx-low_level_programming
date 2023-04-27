#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list.
 *
 * @h: struct pointer of type list_t.
 * Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	int counter =  0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		counter++;
	}
	return (counter);
}

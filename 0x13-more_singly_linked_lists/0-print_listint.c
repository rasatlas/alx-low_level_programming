#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 *
 * @h: a const linked list of type listint_t.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		node++;
	}
	return (node);
}

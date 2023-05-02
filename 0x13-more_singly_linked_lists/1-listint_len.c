#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked
 * listint_t list.
 *
 * @h: a const linked list of type listint_t.
 * Return: the number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0; /* n = number of elements */
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		n++;
	}
	return (n);
}

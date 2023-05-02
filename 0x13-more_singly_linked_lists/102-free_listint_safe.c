#include "lists.h"

/**
 * free_listint_safe - Write a function that frees a listint_t list.
 * @h: head of the linked list.
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0; /*node count*/
	listint_t *tmp = NULL;

	if (!(h && *h))
		return (count);
	while (*h)
	{
		count++;
		if (*h > (*h)->next)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;
	return (count);
}

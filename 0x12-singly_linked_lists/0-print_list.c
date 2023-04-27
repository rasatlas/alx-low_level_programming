#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a struct pointer of type list_t.
 * Return: returns number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h == NULL)
		{
			printf("[0] (nil)\n");
			return (0);
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}

	return (counter);
}

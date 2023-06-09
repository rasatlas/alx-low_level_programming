#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a struct pointer of type list_t.
 *
 * Return: returns number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t counter;
	const list_t *node;

	counter = 0;
	node = h;

	while (node != NULL)
	{
		if (node->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", node->len, node->str);
		}
		counter++;
		node = node->next;
	}

	return (counter);
}

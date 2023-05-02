#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t
 * linked list.
 *
 * @head: head of the list.
 * @index: the index of the node, starting at 0.
 *
 * Return: nth node of a listint_t linked list, if the node does not exist
 * returns NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	if (!head)
		return (0);

	current = head;

	while (index != 0)
	{
		current = current->next;
		index--;
		if (!current)
			return (0);
	}
	return (current);
}

#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 * of a listint_t list.
 *
 * @head: head of the list.
 * @n: value of the struct element.
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *) malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}

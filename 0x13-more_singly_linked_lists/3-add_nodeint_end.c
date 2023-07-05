#include "lists.h"


/**
 * add_nodeint_end - Adds node to the end of the linked list
 * @head: pointer to the pointer of first node
 * @n: the data to add
 * Return: listint_t
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *next_node;
	listint_t *prev;

	next_node = malloc(sizeof(listint_t));

	if (*head == NULL)
	{
		(*head) = next_node;
		return (next_node);
	}

	prev = (*head);

	if (next_node == NULL)
		return (NULL);

	next_node->n = n;
	next_node->next = NULL;

	while (prev->next != NULL)
	{
		prev = prev->next;
	}
	prev->next = next_node;

	return (next_node);
}

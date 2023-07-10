#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked list
 * @head: pointer to pointer to the head node
 * Return: listint_t
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	listint_t *nptr = NULL;

	while ((*head))
	{
		nptr = (*head)->next;
		(*head)->next = ptr;
		ptr = (*head);
		(*head) = nptr;
	}
	(*head) = ptr;

	return (*head);
}

#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end
 * @head: the head pointer
 * @n: the data to store
 * Return: updated pointer
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *nptr;

	nptr = malloc(sizeof(dlistint_t));

	if (nptr == NULL)
		return (NULL);

	ptr = *head;
	nptr->n = n;
	nptr->next = NULL;

	if (*head == NULL)
	{
		nptr->prev = NULL;
		*head = nptr;
		return (nptr);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = nptr;
	nptr->prev = ptr;

	return (nptr);
}

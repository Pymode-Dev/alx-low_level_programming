#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: the pointer to pointer head
 * @idx: the position
 * @n: the data to store
 * Return: pointer to the head
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nptr, *ptr, *ptr2;
	unsigned int position;

	nptr = malloc(sizeof(dlistint_t));
	ptr = *h;

	if (nptr == NULL)
		return (NULL);

	position = 0;

	nptr->n = n;
	nptr->prev = NULL;
	nptr->next = NULL;

	while ((idx - position) != 1)
	{
		position++;
		ptr = ptr->next;
	}
	ptr2 = ptr->next;

	nptr->prev = ptr;
	nptr->next = ptr2;
	ptr2->prev = nptr;
	ptr->next = nptr;

	return (nptr);
}

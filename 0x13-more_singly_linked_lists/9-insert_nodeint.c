#include "lists.h"


/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: pointer to the pointer of first node
 * @idx: the position to insert it to
 * @n: the data to insert
 * Return: listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr;
	listint_t *nptr = malloc(sizeof(listint_t));

	if (*head == NULL && idx != 0)
		return (NULL);

	if (nptr == NULL)
		return (NULL);

	i = 0;

	ptr = (*head);

	nptr->n = n;
	nptr->next = NULL;

	if (idx == 0)
	{
		nptr->next = (*head);
		(*head) = nptr;
		return (nptr);
	}

	if (idx != 0)
	{
		ptr = (*head);
		for (; i < idx - 1 && ptr != NULL; i++)
			ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}

	nptr->next = ptr->next;
	ptr->next = nptr;

	return (nptr);
}

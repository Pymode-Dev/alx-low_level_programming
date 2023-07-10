#include "lists.h"


/**
 * delete_nodeint_at_index - Deletes a node fom a specific position
 * @head: pointer to pointer of first node
 * @index: the position
 *Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *nptr;
	unsigned int i;

	if ((*head) == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		(*head) = ptr;
		return (1);
	}

	ptr = (*head);

	for (i = 0; i < (index - 1); i++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}

	nptr = ptr->next;
	ptr->next = nptr->next;
	free(nptr);

	return (1);
}

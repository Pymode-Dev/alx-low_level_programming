#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a linked list
 * @head: The pointer to the first node
 * @index: the nth node looking for
 * Return: listint_t
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = -1;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		i++;

		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}

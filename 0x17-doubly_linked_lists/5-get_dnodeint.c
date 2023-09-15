#include "lists.h"

/**
 * get_dnodeint_at_index - get a value with its index
 * @head: the head pointer
 * @index: the position where the data is
 * Return: pointer
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int s;

	s = 0;

	while (head != NULL)
	{
		if (s == index)
			return (head);
		head = head->next;
		s++;
	}
	return (NULL);
}

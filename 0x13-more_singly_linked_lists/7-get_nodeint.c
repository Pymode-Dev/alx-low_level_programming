#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a linked list
 * @head: The pointer to the first node
 * @index: the nth node looking for
 * Return: listint_t
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	ptr = head;

	i = 0;

	if (ptr == NULL)
		return (NULL);

	for (; i < index; i++)
	{
		ptr = ptr->next;
	}
	return (ptr);
}

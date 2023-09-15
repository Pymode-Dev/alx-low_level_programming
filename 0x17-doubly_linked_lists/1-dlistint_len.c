#include "lists.h"

/**
 * dlistint_len - returns the nuber of elements in a linked list
 * @h: the head pointer
 * Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size;
	const dlistint_t *ptr;

	ptr = h;
	size = 0;

	while (ptr != NULL)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}

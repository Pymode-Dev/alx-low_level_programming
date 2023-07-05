#include "lists.h"

/**
 * listint_len - This function returns the length of a linked list
 * @h: The address of the first node
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t length;
	const listint_t *ptr = NULL;

	ptr = h;

	length = 0;

	while (ptr != NULL)
	{
		length++;
		ptr = ptr->next;
	}

	return (length);
}

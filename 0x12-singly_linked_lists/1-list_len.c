#include "lists.h"


/**
 * list_len - It returns the number of elements in a linked list
 * @h: The head of the linked list
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t length;

	const list_t *ptr = NULL;

	ptr = h;

	length = 0;

	while (ptr != NULL)
	{
		length++;
		ptr = ptr->next;
	}
	return (length);
}

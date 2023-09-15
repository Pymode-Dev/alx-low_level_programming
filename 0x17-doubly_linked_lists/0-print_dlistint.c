#include "lists.h"

/**
 * print_dlistint - prints all elements in a doubly linked list
 * @h: the head pointer
 *
 * Return: sizt_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t element;
	const dlistint_t *ptr;

	ptr = h;
	element = 0;
	while (ptr != NULL)
	{
		element++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (element);
}

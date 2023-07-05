#include "lists.h"


/**
 * print_listint - print all integers element in all node
 * @h: the head of the singly list
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t length;
	const listint_t *ptr = NULL;

	ptr = h;

	length = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		length++;
	}

	return (length);
}

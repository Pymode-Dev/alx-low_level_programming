#include "lists.h"


/**
 * print_list - prints all the elements of a list_t list.
 * @h: the linked list
 * Return: size_t
 */


size_t print_list(const list_t *h)
{
	unsigned long node;

	const list_t *ptr = NULL;

	ptr = h;

	node = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;
		node++;
	}

	return (node);
}

#include "lists.h"

/**
 * free_listint - Function that frees a linked list
 * @head: The pointer to the first node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}

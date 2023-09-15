#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: the head pointer
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head !=  NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}

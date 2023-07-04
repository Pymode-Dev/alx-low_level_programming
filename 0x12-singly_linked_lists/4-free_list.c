#include "lists.h"


/**
 * free_list - free all the data in a linked list
 * @head: the linked list node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr = NULL;

	ptr = head;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}

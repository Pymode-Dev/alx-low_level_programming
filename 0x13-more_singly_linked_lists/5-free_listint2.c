#include "lists.h"


/**
 * free_listint2 - Frees a linked list
 * @head: pointer to the pointer of first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		(*head) = ptr;
	}
	head = NULL;
}

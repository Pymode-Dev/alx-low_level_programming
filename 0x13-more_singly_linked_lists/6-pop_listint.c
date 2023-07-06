#include "lists.h"

/**
 * pop_listint - Pop out the head node and return the its data
 * @head: pointer to the pointer of first node
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head == NULL)
		return (0);

	ptr = (*head);
	(*head) = ptr->next;
	data = ptr->n;
	free(ptr);

	return (data);
}

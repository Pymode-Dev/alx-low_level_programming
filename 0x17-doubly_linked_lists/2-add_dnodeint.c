#include "lists.h"

/**
 * add_dnodeint - this adds a new node at the beginning of a linked list
 * @head: the head pointer
 * @n: the data to store
 * Return: pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->prev = NULL;
	ptr->n = n;
	ptr->next = (*head);
	if ((*head) != NULL)
		(*head)->prev = ptr;
	(*head) = ptr;

	return (*head);
}

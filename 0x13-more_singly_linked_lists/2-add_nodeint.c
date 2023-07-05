#include "lists.h"


/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: The pointer to pointer of first node
 * @n: The data to add
 * Return: listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if  (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}

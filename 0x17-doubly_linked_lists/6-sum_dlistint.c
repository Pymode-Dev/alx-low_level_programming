#include "lists.h"

/**
 * sum_dlistint - summ all integer
 * @head: the head pointer
 * Return: integer
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

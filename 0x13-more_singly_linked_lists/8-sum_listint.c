#include "lists.h"

/**
 * sum_listint - summ all the data in node
 * @head: pointer to the first node
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	ptr = head;

	sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

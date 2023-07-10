#include "lists.h"

/**
 * print_listint_safe - function that prints linked list
 * @head: the pointer to the head node
 * Return: size_t
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t length = 0;
	long int diff;


	while (head)
	{
		diff = head - head->next;
		length++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}

	}
	return (length);
}

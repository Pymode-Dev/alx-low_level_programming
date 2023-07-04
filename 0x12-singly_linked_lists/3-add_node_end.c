#include "lists.h"


/**
 * str_len - calculates the length of the string
 * @str: the string
 * Return: int
 */

int str_len(const char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * add_node_end - Add a new node at end of the a linked list
 * @head: The node address
 * @str: the data
 * Return: list_t or NULL
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first;
	list_t *new = NULL;


	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = str_len(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	first = (*head);

	while (first->next != NULL)
		first = first->next;

	first->next = new;

	return (new);
}

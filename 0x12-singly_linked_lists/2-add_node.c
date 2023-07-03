#include "lists.h"

/**
 * str_len - calculates the length of string
 * @str: the string
 *
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
 * add_node - It adds a new node at the beginning of a linked list
 * @head: The pointer address
 * @str: The data to store
 *
 * Return: address of new element or NULL
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = str_len(str);
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}

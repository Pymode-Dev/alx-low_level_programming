#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the head pointer to the table
 * @key: the key to hash
 * @value: the value to stor
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nptr;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);

	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	nptr = malloc(sizeof(hash_node_t));
	if (nptr == NULL)
	{
		free(value_copy);
		return (0);
	}
	nptr->key = strdup(key);
	if (nptr->key == NULL)
	{
		free(nptr);
		return (0);
	}
	nptr->value = value_copy;
	nptr->next = ht->array[index];
	ht->array[index] = nptr;

	return (1);
}

#include "hash_table.h"


/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: pointer to the newly create hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

       	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
		return (NULL);

	i = 0;
	for (; i < size; i++)
		table->array[i] = NULL;

	return (table);
}

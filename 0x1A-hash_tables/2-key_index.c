#include "hash_tables.h"


/**
 * key_index - function that gives index of a key
 * @key: the key to hash
 * @size: size ofthe array of the hash table
 * Return: unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

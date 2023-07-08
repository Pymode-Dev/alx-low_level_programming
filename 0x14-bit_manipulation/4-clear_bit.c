#include "main.h"

/**
 * clear_bit - unsets the value of a bit
 * @n: the pointer to the integer
 * @index: the index to unset
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}

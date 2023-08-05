#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: the value to set
 * @index: the position to set to
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	*n |= (1 << index);

	return (1);
}

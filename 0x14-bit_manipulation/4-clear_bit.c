#include "main.h"


/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: the value
 * @index: the position
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}

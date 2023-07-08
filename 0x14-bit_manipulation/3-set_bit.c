#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the pointer to the memory address of the integer
 * @index: the index to set the bit to.
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if ((n == NULL) || (index > ((sizeof(unsigned long int) * 8) - 1)))
			return (-1);

	*n |= (1 << index);
	return (1);
}

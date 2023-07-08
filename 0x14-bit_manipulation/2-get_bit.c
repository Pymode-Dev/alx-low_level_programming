#include "main.h"

/**
 * get_bit - get the value of a bit at a gic=ven indx
 * @n: the integer
 * @index: the index
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > 63)
		return (-1);

	result = (n >> index) & 1;

	return (result);
}

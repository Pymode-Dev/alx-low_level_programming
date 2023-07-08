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

	result = (n >> index) & 1;

	return (result);
}

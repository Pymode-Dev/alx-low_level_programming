#include "main.h"

/**
 * flip_bits - count the number of bits need to flip
 * @n: the first number
 * @m: the second number
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int to_flip = 0;

	while (diff)
	{
		if (diff & 1)
			to_flip++;
		diff >>= 1;
	}
	return (to_flip);
}

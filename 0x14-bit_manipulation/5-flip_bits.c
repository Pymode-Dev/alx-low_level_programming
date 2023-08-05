#include "main.h"


/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: the value
 * @m: the index
 * Return: int
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dbits = n ^ m;
	unsigned int counter = 0;


	while (dbits)
	{
		if (dbits & 1)
			counter++;
		dbits >>= 1;
	}

	return (counter);
}

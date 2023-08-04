#include "main.h"


/**
 * binary_to_uint - convert binary to integer
 * @b: the binary number
 * Return: int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '9')
			return (0);
		result <<= 1;
		result += b[i] - '0';
		i++;
	}

	return (result);
}

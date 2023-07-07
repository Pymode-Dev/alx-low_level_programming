#include "main.h"

/**
 * binary_to_uint - convert binary number to integer
 * @b: The binary to convert
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int index;

	if (b == NULL)
		return (0);

	result = 0;
	index = 0;

	while (b[index] != '\0')
	{
		if (b[index] < '0' || b[index] > '9')
			return (0);

		result = result << 1;
		result = result + (b[index] - '0');
		index++;
	}

	return (result);
}

#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int addr = 0x72562233;
	char *c = (char *) &addr;


	if (*c != 0x33)
		return (0);
	else
		return (1);
}

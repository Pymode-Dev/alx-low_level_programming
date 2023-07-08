nclude "main.h"

/**
 * get_endianess - checks the endianness
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	unsigned int x = 0x72562233;
	char *c = (char *) &x;

	if (*c != 0x33)
		return (0);
	else
		return (1);
}

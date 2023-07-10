#include "main.h"

/**
 * _putchar - write to the terminal
 * @c: the character to write
 * Return: int
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}

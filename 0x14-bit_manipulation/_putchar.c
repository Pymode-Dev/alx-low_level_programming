#include "main.h"

/**
 * _putchar - print charater
 * @c: the character to print
 * Return: int
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}

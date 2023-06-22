#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name with any case
 * @name: the name of the person
 * @f: the function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}

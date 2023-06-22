#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - The function that handles the operator logic to calculate number
 * @s: the operator if exists
 * Return: int
 */


int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t opts[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, opts[i].op) == 0)
		{
			return (opts[i].f);
		}
		i++;
	}
	return (0);
}

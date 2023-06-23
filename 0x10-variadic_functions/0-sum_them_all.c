#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all integers passed into it
 * @n: the integers
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	int result = 0;
	int num = n;
	int i = 0;

	if (n == 0)
		return (0);

	va_start(sum, n);

	for (; i < num; i++)
	{
		result += va_arg(sum, int);
	}
	va_end(sum);
	return (result);
}

#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - print the number with separator
 * @separator: The separator to print within the numbers
 * @n: the number of integer to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int j;

	va_start(list, n);

	j = 0;

	for (; j < n; j++)
	{
		printf("%d", va_arg(list, int));

		if (separator != NULL && j < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}

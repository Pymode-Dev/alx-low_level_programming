#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print the number with separator
 * @separator: The separator to print within the numbers
 * @n: the number of integer to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n, j;
	int number;
	va_list list;

	va_start(list, n);

	j = 0;

	for (; j <= i; j++)
	{
		number = va_arg(list, int);
		printf("%d", number);
		if (separator != NULL && j < (i - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings - prints the strings
 * @separator: pointer to separate strings
 * @n: count of arguments
 * Return: void
 */


void print_strings(const char *separator, unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *string;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

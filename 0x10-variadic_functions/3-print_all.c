#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_all - print all parameter passed to it
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char *const format, ...)
{
	va_list list;
	int i, j, c;
	char *str;
	char f[] = "cifs";

	va_start(list, format);

	i = 0;

	while (format && format[i] != '\0')
	{
		j = 0;
		while (f[j])
		{
			if (format[i] == f[j] && c)
			{
				printf(", ");
			}
			j++;
		}

		if (format[i]  == 'c')
		{
			printf("%c", va_arg(list, int));
			break;
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(list, int));
			break;
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(list, double));
			break;
		}
		else if (format[i] == 's')
		{
			str = va_arg(list, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		}
		i++;
	}
}

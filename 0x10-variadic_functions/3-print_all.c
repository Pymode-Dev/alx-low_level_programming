#include <stdarg.h>
#include "variadic_functions.h"

void print_string(va_list str);
void print_char(va_list c);
void print_int(va_list n);
void print_float(va_list fl);

/**
 * print_string - prints string
 * @str: list of args
 * Return: void
 */

void print_string(va_list str)
{
	char *s = va_arg(str, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_char - prints character
 * @c: the list of character
 * Return: void
 */

void print_char(va_list c)
{
	char ch = va_arg(c, int);

	printf("%c", ch);
}

/**
 * print_int - prints list of integers
 * @n: list of integers
 * Return: void
 */

void print_int(va_list n)
{
	int number = va_arg(n, int);

	printf("%d", number);
}

/**
 * print_float - prints list of float
 * @fl: the list of float
 * Return: void
 */

void print_float(va_list fl)
{
	float fl_num = va_arg(fl, double);

	printf("%f", fl_num);
}

/**
 * print_all - print all parameter passed to it
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char *const format, ...)
{
	va_list list;
	int i, j;
	int ch;
	char f[] = "cifs";

	va_start(list, format);

	i = 0;

	while (format && format[i] != '\0')
	{
		j = 0;

		while (f[j])
		{
			if (format[i] == f[j] && ch)
			{
				printf(", ");
			}
			j++;
		}

		switch (format[i])
		{
			case 'c':
				print_char(list), ch = 1;
				break;
			case 'i':
				print_int(list), ch = 1;
				break;
			case 'f':
				print_float(list), ch = 1;
				break;
			case 's':
				print_string(list), ch = 1;
				break;
		}
		i++;
	}
	printf("\n");
}

#include "main.h"

/**
 * wildcmp - compare strings recursively
 * @str1: pointer to string 1
 * @str2: pointer to string 2
 * Return: 0 or 1
 */


int wildcmp(char *str1, char *str2)
{
	if (*str2 == '\0')
		return (*str1 == '\0');
	if (*str1 == *str2)
		return (*str1 != '\0' && wildcmp(str1 + 1, str2 + 1));
	if (*str2 == '*')
		return (wildcmp(str1, str2 + 1) ||
(*str1 != '\0' && wildcmp(str1 + 1, str2)));
	return (0);
}

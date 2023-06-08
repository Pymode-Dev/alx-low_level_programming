#include <stdio.h>


int _prime(int number, int check);
/**
 * is_prime_number - function to find if a number is a prime or not
 * @number: The number to check
 * Return: int
 */

int is_prime_number(int number)
{
	return (_prime(number, 2));
}

/**
 * _prime - checks if number is prime
 * @number: number
 * @check: number to test against
 * Return: 1 for prime, 0
 */

int _prime(int number, int check)
{
	if (number <= 1)
		return (0);
	else if (check == number || number <= 0)
		return (1);
	else if (number % check == 0 || number <= 0)
		return (0);
	else
		return (_prime(number, check + 1));
}

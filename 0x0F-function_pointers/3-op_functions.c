#include <stdio.h>
#include "3-calc.h"


/**
 * op_add - addition operation for two numbers
 * @a: first number
 * @b: second number
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction operation for two numbers
 * @a: first number
 * @b: second number
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operation for two numbers
 * @a: first number
 * @b: second number
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation for two numbers
 * @a: first number
 * @b: second number
 * Return: int
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus operation for two numbers
 * @a: first number
 * @b: second number
 * Return: int
 */

int op_mod(int a, int b)
{
	return (a % b);
}
